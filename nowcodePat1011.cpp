#include<stdio.h>

int main(){
	int num[10] = {0};
	long long counter = 0;
	int N,nTemp;
	int n = 0;
	int temp = 0;
	while((scanf("%lld",&N) != EOF)){
		nTemp = N;
		if(N == 0){
			num[0]++;
		}
		while(nTemp){
			n++;
			temp = nTemp%10;
			nTemp /= 10;
			num[temp]++;
		}
		
		for(int i = 0 ;i<10;i++){
			if(num[i] != 0){
				printf("%d:%d\n",i,num[i]); 	
			}
		}
		
		for(int i = 0 ; i < 10 ; i++){
			num[i] = 0;
		}
		n = 0;
//		num = {0};
	}
	
	

	return 0;
}
