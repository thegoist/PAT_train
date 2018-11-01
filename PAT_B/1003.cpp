#include<cstdio>
#include<iostream>
#include<string>
/*
	数理逻辑推理 
*/
using namespace std;
int check(string str){
//	cout<<str<<endl;
	int p,t;
	for(int i = 0; i < str.length(); i++){
		if(str[i]!='P'&&str[i]!='A'&&str[i]!='T'){
			return 0;
		}
		if(str[i]=='P'){
			p = i;
		}
		if(str[i]=='T'){
			t = i;
		}
	}
	if(t-p != 1 && p * (t-p-1) == str.length()-t-1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	string str;
	while(scanf("%d",&n) != EOF){
		getchar();
		for(int i = 0; i < n; i++){
//			cout<<i<<endl;
//			cin>>str;
			getline(cin,str);
			if(check(str)){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
} 
