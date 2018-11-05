#include<bits/stdc++.h>
using namespace std;
int counter[5000];
int func(int x){
	int temp;
	temp = x;
	while(temp>1){
		if(temp%2==0){
			temp = temp/2;
			counter[temp] += 1;
			continue;
		}else{
			temp = (temp*3 + 1)/2;
			counter[temp] += 1;
			continue;
		}
	}
	
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
		
		func(nums[i]);
	}
	int flag = 0;
	sort(nums.begin(),nums.end(),cmp);
	for(int i = 0;i < nums.size(); i++){
		if(counter[nums[i]] == 0){
			if(flag == 1) {
				cout<<" "<<nums[i];
//				cout<<" " ;	
			}
			if(flag == 0){
				cout<<nums[i];
				flag = 1;
			}
			
		}
	}
	cout<<endl;
	
	return 0;
} 
