#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	c = a*b;
	int flag = 0;
	while(c>0){
		if(c%10 != 0){
			flag = 1;
		}
		if(flag == 1){
			cout<<c%10;	
		}
		c = c/10;
	}
	cout<<endl;
}
