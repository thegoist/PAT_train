#include<stdio.h>
#include<string.h>
int main(){
//	char words[10];
	int i = 0;
	char s[80][80];
	int flag = 0;
	//¶ÁÈëÊý¾Ý 
	while(scanf("%s",s[i]) == 1){
		
		i++;
//		if(i==8){
//			break;
//		}
	}
	for(int j = i-1; j >= 0; j--){
		if (flag == 0){
			flag = 1;
			printf("%s",s[j]);
		}else{
			printf(" %s",s[j]);
			
		}
	}
//	getchar();

//	printf("+++++%s",s);
//
	return 0;
} 
