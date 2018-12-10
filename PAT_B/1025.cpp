#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int first,k,n,temp;
	int data[100005], next[100005], list[100005];
	cin>>first>>n>>k;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&temp);
		scanf("%d%d",&data[temp],&next[temp]);
	}
	int sum = 0;
	while(first != -1){
		list[sum++] = first;
		first = next[first];
	}
	
	for(int i = 0 ; i < (sum-sum%k) ; i+=k){
		reverse(begin(list) + i, begin(list) + i + k);
	}
	for(int i = 0 ; i < sum-1 ; i++){
		printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	}
	printf("%05d %d -1\n",list[sum - 1], data[list[sum - 1]]);
	
	return 0;
}