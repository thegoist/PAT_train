#include<stdio.h>
int check(char num[]){
//	printf("********%s\n",num);
	int temp,sum = 0;
	int out;
	int v[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char zm[] = {'1','0','X','9','8','7','6','5','4','3','2'};
	//加权求和
	
	for(int i = 0; i<17 ;i++){
		temp = num[i] - '0';
		printf("????   %d",temp);
		if(temp>9||temp<0){
			printf("%s\n",num);
			return 0;
		}
		sum += temp*v[i];
	} 
	
//	printf("xxxxxxxxxxxxxxxxxx%d %d",temp,sum);
	
	out = sum%11;
	if(zm[out] == num[16]){
		printf("All passed\n");
	}else{
		printf("%s\n",num);
	}
	return 0;
}
int main(){
	int v[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char zm[] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int N;
	scanf("%d",&N);
	char nums[N][20] = {0};
//	scanf("%d",&num);
	for(int i = 0;i < N; i++){
		scanf("%s",nums[i]);
//		printf("%d       %s\n",N,num[i]);
	}
	for(int i = 0;i < N; i++){
		check(nums[i]);
	}
	return 0;
} 
