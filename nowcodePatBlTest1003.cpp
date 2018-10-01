#include<stdio.h>
void calcu(int N);
int main(){
	int N;
	
	while(scanf("%d",&N) == 1){
		if(N>1){
		calcu(N);
		}else{
			printf("%d\n",N);
	}
	}
	

	
	
	return 0 ;
} 

void calcu(int N){
	int i = 0;
	long long  temp;
	long long child = 1;
    long long adult = 0;
	while (++i <= N){
		temp  = child;
		child = adult;
		adult += temp;
	}
	printf("%lld\n",child+adult);
}
