#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
int judge(int x){
	double n = sqrt(x);
	int temp;
	int flag = 0;
	for(int i = 2; i <= n;i++){
		if(x%i == 0){
			flag++;
		}
	}
	if(flag == 0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
	vector<int> prime;
		for(int i = 0;i < n;i++){
			if((judge(i))){
				prime.push_back(i);
			}
		}
		int counter = 0;
		for(int i = 1; i <= prime.size();i++){
			if(prime[i]-prime[i-1] == 2){
//				cout<<prime[i]<<" "<<prime[i-1]<<endl;
				counter++;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}
