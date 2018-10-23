#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char ch[55] = {0};
	int len = 0;
	char temp ;
	while((scanf("%s",ch)) != EOF){
		len = strlen(ch);
//		printf("len %d\n", len);
		sort(ch,ch+len);
		if(ch[0] == '0'){
			for(int i = 0; i < len;i++){
				if(ch[i]!='0'){
					temp = ch[0];
					ch[0] = ch[i];
					ch[i] = temp;
					break;
				}
			}
		}
		for(int i = 0; i < len;i++){
			printf("%d",ch[i] - '0');
		}
		printf("\n");
	}
	return 0;
}
