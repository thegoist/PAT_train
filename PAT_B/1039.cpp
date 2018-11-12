//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<stack>
#include<map>
using namespace std;

int main(){
	string str1,str2;
	
	cin>>str1;
	cin>>str2;
	map<char,int> str1_m;
	map<char,int> str2_m;
	for(int i = 0 ;i < str2.length();i++){
		
		for(int j = 0 ; j < str1.length(); j++){
			if(str1[j] == str2[i]){
				str1[j]='#';
				str2[i]='#';
			}
		}
	}
	int cnt1 = 0;
	int cnt2 = 0;
	for(int i = 0; i < str1.length(); i++){
		if(str1[i] != '#') cnt1++;
	}
	for(int i = 0; i < str2.length();i++){
		if(str2[i] != '#') cnt2++;
	}
	if(cnt2 != 0) cout<<"No "<<cnt2<<endl;
	
	else  cout<<"Yes "<<cnt1<<endl;
	
	return 0;
} 
