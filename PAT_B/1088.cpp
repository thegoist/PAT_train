#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int m,x,y;

//int abs(int value){
//	if(value<0) return -value;
//	else return value;
//}
void print(double v){
	if (m == v) printf(" Ping");
    else if (m < v) printf(" Cong");
    else printf(" Gai");
}

int main(){
	
	cin>>m>>x>>y;
	
	for(int i = 99; i >= 10; i--){
		int j = i%10*10 + i/10;
		double k = abs(j - i) * 1.0 / x;
		if(j == k * y){
//			cout<<i<<" "<<j<<" "<<k<<endl;
			cout<<i;
			print(i); print(j); print(k);
			return 0;
		}
	}
	cout<<"No Solution"<<endl;
	return 0;
}
