#include<stdio.h>
#include<cstring>
int main(){
	int N;
	int b = 0;
	int s = 0;
	int n = 0;
	while((scanf("%d",&N) != EOF)){
		
		
		b = N / 100;
		s = N % 100 / 10;
		n = N % 10;
//		printf("%d %d %d",b,s,n);
		for(int i = 0;i < b;i++){
			printf("B");
		}
		for(int i = 0;i < s;i++){
			printf("S");
		}
		for(int i = 0;i < n;i++){
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
} 
