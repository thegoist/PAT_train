#include<stdio.h>
int CLK_TCK = 100;
void func(int c1,int c2);
int main(){
	int C1,C2;
	while((scanf("%d%d",&C1,&C2) != EOF)){
//		printf("%d %d\n",C1,C2);
		func(C1,C2);
	}
	return 0;
}
void func(int c1,int c2){
	int c ,hour,min,sec;
	int out; 
	c = c2 - c1;
	out = c / CLK_TCK;
//	printf("**********%f",out);

//把秒换成目标形式

	hour = out/3600;
	
	min = out%3600/60;
	
	sec = out%60;
	
	printf("%02d:%02d:%02d\n",hour,min,sec);
	 
}
