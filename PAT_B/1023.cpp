#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int ch[10] = {0};
	for(int i = 0; i < 10; i++){
		scanf("%d",&ch[i]);
//		printf("%d ",ch[i]);
	}
//	printf("\n");
	
	for(int i = 1; i < 10; i++){
		if(ch[i]!=0){
			printf("%d",i);
			ch[i] = ch[i]-1;
			break;
		}
	}
	for(int i = 0; i < 10; i++){
		if(ch[i]!=0){
			for(int j = 0; j < ch[i];j++){
				printf("%d",i);
			}
		}
	}
	printf("\n");
	return 0;
}
