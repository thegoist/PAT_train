#include<stdio.h>
int nums(int n);
//int judge(int n);
int main(){
	int n;
	int num[8] = {0};
	num[0] = 7;
	num[1] = 11;
	for(int i = 2;i < 8;i++){
		num[i] = (num[i-1] + num[i-2])%3;
	}
	while(scanf("%d",&n) == 1){
		n = n % 8;
		if(num[n] == 0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}




// 
//int nums(int n){
//	if(n == 0){
//		return 7;
//	}
//	
//	if(n == 1){
//		return 11;
//	}
//	
//	if(n >= 2){
//		return nums(n-1) + nums(n-2);
//	}
//	return 0;
//	
//	
//}
//int judge(int n){
//	if((nums(n) % 3) == 0){
//		return 1;
//	}else{
//		return 0;
//	}
//	return 0;
//}


