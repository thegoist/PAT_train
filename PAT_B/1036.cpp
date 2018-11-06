#include<stdio.h>
int main(){
	char ch;
	int N;
	int n;
	scanf("%d %c",&N,&ch);
//	printf("%d ??%c",N,ch);
	for(int i = 0; i < N; i++){
		printf("%c",ch);
	}
	printf("\n");
	
	
	n = (int)(N*0.5 + 0.5); 
//	 printf("%d\n",n);
	for(int j = 0; j < n-2; j++){
		for(int i = 0; i < N; i++){
			if(i == 0||i == N-1){
				printf("%c",ch);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(int i = 0; i < N; i++){
		printf("%c",ch);
	}

	
	
	return 0;
}