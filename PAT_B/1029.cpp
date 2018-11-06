#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	set<char> s1;
	set<char> s2;
	char ch[100];
	char ch2[100];
	scanf("%s",ch);
//	for(int i = 0 ; i < strlen(ch); i++){
//		s1.insert(ch[i]); 
//	}
	scanf("%s",ch2);
	for(int i = 0; i < strlen(ch2); i++){
		char temp1;
		temp1 = ch2[i];
		if(ch2[i]<='z' && ch2[i]>='a'){
			temp1 = ch2[i] - 32;
		}
		s2.insert(temp1);
	}
	for(int i = 0; i<strlen(ch); i++){
		char temp;
		temp = ch[i];
		if(ch[i]<='z' && ch[i]>='a'){
			temp = ch[i] - 32;
		}
		if((s2.count(temp) == 0) && (s1.count(temp) == 0)){
			s1.insert(temp);
			printf("%c",temp);	
		}
	}
	printf("\n");
}
