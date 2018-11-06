#include<cstdio>
#include<stack>
using namespace std;
//¿¼ÂÇ0µÄÇé¿ö 
int main(){
	long long a,b,d;
	long long o = 0;
	stack<int> st;
	while((scanf("%lld%lld%lld",&a,&b,&d)) != EOF){
		o = a+b;
		if(o==0) printf("%d",o);
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
