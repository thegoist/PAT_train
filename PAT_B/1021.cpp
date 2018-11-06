#include<stdio.h>
#include<cstring>

int main(){
	int num[10] = {0};
	char N[1000];

	int n = 0;
	int temp = 0;
	while((scanf("%s",N) != EOF)){
		//初始化计数数组 
		for(int i = 0 ; i < 10 ; i++){
			num[i] = 0;
		}
		n = 0;
	
		
		//处理字符串，计数 
		for(int i = 0 ; i < strlen(N) ; i++){
//			printf("%c",N[i]);
			temp = N[i] - '0';
//			printf("%d\n",temp);
			num[temp]++;
		}
		
		//输出 
		for(int i = 0 ;i<10;i++){
			if(num[i] != 0){
				printf("%d:%d\n",i,num[i]); 	
			}
		}
		
	
	}
	
	

	return 0;
}
