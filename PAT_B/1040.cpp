//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;
//z×¢Òâ1000000007
int main(){
	string str;
	long long p = 0,pa = 0,pat = 0;
	cin>>str;
	for(int i = 0 ;i < str.length();i++){
//		cout<<str[i]<<" ";
		if(str[i] == 'P'){
			p++;
		}else if(str[i] == 'A'){
			pa = (pa+p)%1000000007;
		}else if(str[i] == 'T'){
			pat = (pat+pa)%1000000007;
		}
		
	}
	cout<<pat<<endl;
	return 0;
} 
