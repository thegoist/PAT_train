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
	int c ;
	float out;
	c = c2 - c1;
	out = c / CLK_TCK;
	printf("**********%f",out);
}
