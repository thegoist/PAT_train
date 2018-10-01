#include<stdio.h>
int nums(int n);
int judge(int n);
int main(){
	int n;
	while(scanf("%d",&n) == 1){
		if(judge(n) == 1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}

int nums(int n){
	if(n == 0){
		return 7;
	}
	
	if(n == 1){
		return 11;
	}
	
	if(n >= 2){
		return nums(n-1) + nums(n-2);
	}
	return 0;
	
	
}

int judge(int n){
	if((nums(n) % 3) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
