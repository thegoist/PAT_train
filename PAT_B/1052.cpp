#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	string temp;
	vector<string> h,e,m;
	getline(cin,temp);
	for(int i = 0; i < temp.length() ; i++){
		if(temp[i] == '['){
			for(int j = i ; j < temp.length() ; j++){
				if(temp[j] == ']'){
					h.push_back(temp.substr(i+1,j-i-1));
					i = j;
					break;
				}
			}
		}
	}
	getline(cin,temp);
	for(int i = 0; i < temp.length() ; i++){
		if(temp[i] == '['){
			for(int j = i ; j < temp.length() ; j++){
				if(temp[j] == ']'){
					e.push_back(temp.substr(i+1,j-i-1));
					i = j;
					break;
				}
			}
		}
	}
	getline(cin,temp);
	for(int i = 0; i < temp.length() ; i++){
		if(temp[i] == '['){
			for(int j = i ; j < temp.length() ; j++){
				if(temp[j] == ']'){
					m.push_back(temp.substr(i+1,j-i-1));
					i = j;
					break;
				}
			}
		}
	}
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		int a,b,c,d,f;
		cin>>a>>b>>c>>d>>f;
		if(a<1 || a>h.size() || b<1 || b>e.size() || c<1 || c>m.size() || d<1 || d>e.size() || f<1 || f>h.size()){
			cout<<"Are you kidding me? @\\/@"<<endl;
		}else{
			cout<<h[a-1]<<"("<<e[b-1]<<m[c-1]<<e[d-1]<<")"<<h[f-1]<<endl;
		}
	}
	return 0;
}
