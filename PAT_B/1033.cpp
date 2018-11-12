//#include<bits/stdc++.h>
#include<cstdio>
#include<cstring> 
using namespace std;
char ch[100005] = {0};
char ch2[100005] = {0};
//int flag = 0;
int judge(char c){
	char temp;
	int counter = 0;
	temp = c;
	if(temp <= 'z' && c>='a'){
		temp = c - 32;
	}
	for(int i = 0; i < strlen(ch); i++){
		if(temp == ch[i]){
			counter++;
			return 0;
		}
	}
	if(counter==0){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	scanf("%s",ch);
	scanf("%s",ch2);
	int counter = 0;
	int flag = 0;
	for(int i = 0; i < strlen(ch); i++){
		if(ch[i] == '+'){
			flag = 1;
		}
	}
	for(int i = 0; i < strlen(ch2); i++){
		
		if(judge(ch2[i])){
			if(flag == 1){//È«²¿Ð¡Ð´ 
				if(ch2[i] <= 'Z' && ch2[i] >= 'A'){
					counter++;
//					printf("%c",ch2[i]+32);
				}else{
					counter++;
					printf("%c",ch2[i]);
				}
				
			}else{
				printf("%c",ch2[i]);
				counter++;
			}
		}
	}
//	if(counter == 0){
//		printf("_");
//	}
	printf("\n");
	return 0;
}
