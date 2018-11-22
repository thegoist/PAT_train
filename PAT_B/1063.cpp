#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	double r;
	double max_r = 0;;
	for(int i = 0 ; i < n ; i++){
		cin>>a>>b;
		r = sqrt(a*a + b*b);
//		cout<<r<<endl;
		if(max_r < r) max_r = r;
	}
	printf("%.2f",max_r);
	return 0;
}
