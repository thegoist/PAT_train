#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n ;
	cin>>n;
	getchar();
	string ans_t;
	string ans;
	for(int i = 0 ; i < n; i++){
		getline(cin,ans_t);
		for(int j = 0 ; j < ans_t.size() ; j++){
			if(ans_t[j] == 'T'){
//				cout<<ans_t[j-2]<<endl;
				if(ans_t[j-2] == 'A') ans+='1';
				if(ans_t[j-2] == 'B') ans+='2';
				if(ans_t[j-2] == 'C') ans+='3';
				if(ans_t[j-2] == 'D') ans+='4';
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 
