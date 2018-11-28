#include<iostream>
#include<vector>
using namespace std;
//https://www.cnblogs.com/andywenzhi/p/5837751.html Ïê½â 
int main(){
	int n ;
	cin>>n;
	double nums[100005];
	double sum = 0.0;
	for(int i = 1 ; i <= n ; i++){
		cin>>nums[i];
		sum += nums[i] * i *(n-i+1);
	}
	
	printf("%.2f",sum);
	return 0;
} 
