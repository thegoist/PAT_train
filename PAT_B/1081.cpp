#include<iostream>
#include<string>
using namespace std;
void check(string s){
	int f1 = 0;
	int f2 = 0;
	int f3 = 0;
	int cnt = 0;
	for(int i = 0 ; i < s.size(); i++){
		if(s[i]<='z' && s[i]>='a') f1 = 1,cnt++;
		if(s[i]<='Z' && s[i]>='A') f1 = 1,cnt++;
		if(s[i]<='9' && s[i]>='0') f2 = 1,cnt++;
		if(s[i] == '.') cnt++;	
	}
	if(cnt != s.size()){
		cout<<"Your password is tai luan le."<<endl;
		return ;	
	} 
	if(f1==0){
		cout<<"Your password needs zi mu."<<endl;
		return;	
	} 
	if(f2==0){
		cout<<"Your password needs shu zi."<<endl;
		return;
	} 
	cout<<"Your password is wan mei."<<endl;
}
int main(){
	int n;
	cin>>n; 
	getchar();
	string temp;
	for(int i = 0; i < n; i++){
		getline(cin,temp);
		if(temp.size()>=6){
			check(temp);
		}else{
			cout<<"Your password is tai duan le."<<endl;
		}
	}
	return 0;
}
