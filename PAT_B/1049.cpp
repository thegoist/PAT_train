#include<iostream>
#include<vector>
using namespace std;
//这是一道数学问题 请仔细思考后 做题 
//https://www.cnblogs.com/andywenzhi/p/5837751.html 详解 
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
