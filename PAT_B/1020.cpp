#include<bits/stdc++.h>
using namespace std;
//动态数组用s[i]赋值时需要提前写清楚vector的大小 
struct mooncake{
	float mount,price,unit;
};
bool cmp(mooncake a , mooncake b){
	return a.unit>b.unit;
}
int main(){
	int n,t;
	cin>>n>>t;
	vector<mooncake> moon(n);
	
	for(int i = 0; i < n; i++){
		cin>>moon[i].mount;
	}
	for(int i = 0; i < n; i++){
		cin>>moon[i].price;
		moon[i].unit = moon[i].price/moon[i].mount;
	}
	sort(moon.begin(),moon.end(),cmp);
	float sum = 0.0;
	
	for(int i = 0; i < n; i++){
		if(moon[i].mount <= t){
			sum += moon[i].price;
			
		}else{
			sum += moon[i].unit*t;
			break;
		}
		t -= moon[i].mount;
	}
	printf("%.2f\n",sum);
	return 0;
} 
