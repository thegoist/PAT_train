#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a1,a2,b1,b2;
	int a_cnt = 0,b_cnt = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>a1>>a2>>b1>>b2;
		if((a2 != a1+b1) && (b2 == a1+b1)){
			a_cnt++;
		}
		if((a2 == a1+b1) && (b2 != a1+b1)){
			b_cnt++;
		}
	}
	cout<<a_cnt<<" "<<b_cnt<<endl;
	return 0;
} 
