#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
//测试点3为0001 
bool cmp1(int a, int b){//从大到小 
	return a>b;
}
bool cmp2(int a, int b){//从小到大  
	return a<b;
}
int printNum(int num){

	int num1 = 0;
	int num2 = 0;
	int output = 0;
	char ch[4] = {0};
	for(int i = 3; i >= 0;i--){
//			printf("%d\n",temp%10);
		ch[i] = num%10 + '0';
		num	= num/10;
		}
		sort(ch,ch+4,cmp1);
		for(int i = 3; i >= 0 ; i--){
			num1 = num1*10+ch[i]-'0';
		}
		sort(ch,ch+4,cmp2);
		for(int i = 3; i >= 0; i--){
			num2 = num2*10+ch[i]-'0';
		}
	output = num2 - num1;
	printf("%04d - %04d = %04d\n",num2,num1,output);
	return output;	
}
int main(){
	char ch[3] = {0};

		int temp = 0;
	while((scanf("%d",&temp)) != EOF){
		memset(ch,0,sizeof(ch));
		int num1 = 0, num2 = 0;
		int output = 0;
		for(int i = 3; i >= 0;i--){
//			printf("%d\n",temp%10);
			ch[i] = temp%10 + '0';
			temp = temp/10;
		}
		sort(ch,ch+4,cmp1);
		
		for(int i = 3; i >= 0 ; i--){
			num1 = num1*10+ch[i]-'0';
//			printf("%d\n",ch[i] - '0');
		}
		
		sort(ch,ch+4,cmp2);
		for(int i = 3; i >= 0; i--){
			num2 = num2*10+ch[i]-'0';
		}
		if(num1 != num2){
			output = num2 - num1;
			printf("%04d - %04d = %04d\n",num2,num1,output);
			while(output != 6174){
				output = printNum(output);	
			}
		}else{
			printf("%0d - %0d = 0000\n",num1,num2);	
		}
		
		
	}
	return 0;
} 
