#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int a[5] = {0}; 
		int flag = 0;
		int counter[5] = {0};
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin>>v[i];
			if(v[i]%5==0 && v[i]%2==0 ){
//				cout<<a[0]<<" a1"<<endl;
				a[0]+=v[i];
				counter[0]++;
			}
			if(v[i]%5==1){
				counter[1]++;
				if(flag == 0){
					a[1]+=v[i];
					flag = 1;
				}else{
					a[1]-=v[i];
					flag = 0;
				}
			}
			if(v[i]%5==2){
				counter[2]++;
				a[2]++;
			}
			if(v[i]%5==3){
				counter[3]++;
				a[3]+=v[i];
			}
			if(v[i]%5==4){
				counter[4]++;
				if(v[i]>a[4]){
					a[4] = v[i];
				}
			}
		}
		double d1 = a[3];
		double d2 = counter[3];
		double d = d1/d2;
//		if(counter1 == 0) (char)a1 , a1 = 'N';	
//		if(counter2 == 0) (char)a2 , a2 = 'N';
//		if(counter3 == 0) (char)a3 , a3 = 'N';
//		if(counter4 == 0) (char)a4 , a4 = 'N';
//		if(counter5 == 0) (char)a5 , a5 = 'N';
		
//		if(counter4 == 0) {
//	
//			cout<<(char)a1<<" "<<(char)a2<<" "<<a3<<" "<<a4<<" "<<a5<<endl;
//		}else{
//			cout<<a1<<" "<<a2<<" "<<a3;
//			printf(" %.1f",d);
//			cout<<" "<<a5<<endl;
//		}
		for(int i = 0; i < 5; i++){
		
			if(counter[i]==0) cout<<'N';
			else if(counter[i]!=0 && i!=3) cout<<a[i];
			else if(counter[i]!=0 && i==3) printf("%.1f",d);
			if(i<4) cout<<" ";
			
		}
		cout<<endl;
		
	}
	return 0;
}
