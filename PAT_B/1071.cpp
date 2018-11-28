#include<iostream>
using namespace std;;
int main(){
	int t,k;
	cin>>t>>k;
	int n1,b,t1,n2;
	int x = t;
	for(int i = 0 ; i < k ; i++){
		cin>>n1>>b>>t1>>n2;
		if(t1 > x){
			cout<<"Not enough tokens.  Total = "<<x<<"."<<endl;
//			break;
			continue;	
		}
		
		if(b==0 && n2<n1){//win
			x += t1;
//			cout<<"Win "<<t1<<"! Total = "<<x<<"."<<endl;
			printf("Win %d!  Total = %d.\n", t1, x);
		}
		if(b==0 && n2>=n1){
			x -= t1;
//			cout<<"Lose "<<t1<<". Total = "<<x<<"."<<endl;
			printf("Lose %d.  Total = %d.\n", t1, x);
		}
		if(b==1 && n2>n1){//win
			x += t1;
//			cout<<"Win "<<t1<<"! Total = "<<x<<"."<<endl;
			printf("Win %d!  Total = %d.\n", t1, x);
		}
		if(b==1 && n2<=n1){
			x -= t1;
//			cout<<"Lose "<<t1<<". Total = "<<x<<"."<<endl;
			printf("Lose %d.  Total = %d.\n", t1, x);
		}
		if( x <= 0){
			cout<<"Game Over."<<endl;
			break;
		}
		
	}
	return 0;
} 
