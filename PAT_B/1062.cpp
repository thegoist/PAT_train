#include<iostream>
using namespace std;
//bool check(int x,int y){
//	if(y % x == 0) return false;
//	else return true;
//}
int gcd(int a,int b) // 求最大公约数
{
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
//	cout<<n1<<" "<<m1<<" "<<k<<endl;
	double x1,x2,x3;
	x1 = double(n1)/m1; 
	x2 = double(n2)/m2;
//	cout<<x1<<" "<<x2<<endl;
	double temp;
	if(x2 < x1){
		temp = x2;
		x2 = x1;
		x1 = temp;
	}
	int flag = 0;
	for(int i = 1 ; i < k ; i++){
		x3 = double(i)/k;
		if(x3>x1 && x3<x2 && gcd(i,k)==1){
			if(flag == 0) flag = 1;
			else cout<<" ";
			cout<<i<<'/'<<k;
		}
	}
	return 0;
}
