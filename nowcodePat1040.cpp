#include<cstdio>
#include<cmath> 
int a[100] = {0};
int main(){
	int N,dis;
	int flag = 0;
	scanf("%d",&N);
	scanf("%d",&dis);
	for(int i = 0; i < N; i++){
		scanf("%d",&a[i]);
	}
	
	
	for(int i = N - (dis % N); i < N; i++){
		if(flag == 0){
			flag = 1;
			printf("%d",a[i]);
		}
		else if( flag == 1){
			
			printf(" %d",a[i]);
		}
	}
	
	for(int i = 0; i < N - (dis % N); i++){
		if(flag == 0){
			flag = 1;
			printf("%d",a[i]);
		}
		else if( flag == 1){
			
			printf(" %d",a[i]);
		}
	}
	return 0;
} 
