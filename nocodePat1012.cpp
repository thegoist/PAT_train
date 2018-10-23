#include<cstdio>
#include<stack>
using namespace std;
int main(){
	int a,b,d;
	int o = 0;
	stack<int> st;
	while((scanf("%d%d%d",&a,&b,&d)) != EOF){
		o = a+b;
		while(o!=0){
//			printf("%d",o%d);
			st.push(o%d);
			o = o/d;
		}
		while(!st.empty()){
			printf("%d",st.top());
			st.pop();
		}
		printf("\n");
	}
	return 0;
}
