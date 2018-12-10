#include<iostream>
#include<cstdio>
using namespace std;
long long a1,b1,a2,b2;

long gcd(int a, int b){
	if(a % b == 0){
		return b;
	}
	else{
		return gcd(b,a % b);
	}
}
int main (){
	
//	cin>>a>>b;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<endl;
	long long c = gcd()
	return 0;
} 
