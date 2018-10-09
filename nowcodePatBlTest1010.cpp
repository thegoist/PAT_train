#include<stdio.h>
int main(){
	int N = 0;
	long long nums[91] = {0};
	nums[1] = 1;
	nums[2] = 2;
	for(int i = 3;i <= 90;i++){
		nums[i] = nums[i-1] + nums[i-2];
//		printf("%lld\n",nums[i]);
	}
	while((scanf("%d",&N) != EOF)){
		printf("%lld\n",nums[N]);
	}
	return 0;
}
