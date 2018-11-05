#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n = 0;
	while(scanf("%d",&n) != EOF){
		long long  a,b,c;
		for(int i = 0; i < n; i++){
			cin>>a>>b>>c;
			if(a+b>c){
				cout<<"Case #"<<i+1<<": true"<<endl;
			}else{
				cout<<"Case #"<<i+1<<": false"<<endl;
			}
		}
		
	}
	return 0;
} 
