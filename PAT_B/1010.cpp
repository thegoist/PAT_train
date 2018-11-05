#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a ,b;
	int flag = 0;
	
	while(scanf("%d%d",&a,&b) != EOF){
		if(b!=0){
			if(flag == 1) cout<<" ";
			a = a*b;
			b = b-1;
			cout<<a<<" "<<b;
			flag = 1;
		}
	}
	if(flag == 0){
		cout<<0<<" "<<0;
	}
//	cout<<endl;
	return 0;
}
