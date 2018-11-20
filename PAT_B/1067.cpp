#include<iostream>
#include<string>
#include<vector>
using namespace std;
string pwd;
/* 笔记
	简单题
	但是在cin输入中可能会输入到换行 
	所以导致了有两个测试点不能通过 
*/ 
bool check(string s){
//	cout<<s<<" "<<pwd<<endl;
	if(s == pwd) return true;
	else return false;
}
int main(){
	
	int n;
	cin>>pwd>>n;
	string temp;
	getline(cin,temp);
	vector<string> v;
	do{
//		cin>>temp;
		getline(cin,temp);
		if(temp == "#") break;
		v.push_back(temp);
			
	}while(temp != "#");
	
	int cnt = 0;
	
	for(vector<string>::iterator it = v.begin() ; it != v.end() ; it++){
//		if( *it == "#") break;
		if(check(*it) && cnt < n){
			cout<<"Welcome in"<<endl;
			break;
		}else{
			cnt++;
			cout<<"Wrong password: "<<*it<<endl;
		}
		
		if(cnt >= n){
//			cout<<"Wrong password: "<<*it<<endl;
			cout<<"Account locked"<<endl;
			break;
		}
	}
	
	return 0;
}
