#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	double e;
	int d;
	int flag1 = 0 ,flag2 = 0;	
	cin>>n>>e>>d;
	int d1;
	int none = 0;
	int none1 = 0;
	
	for(int i = 0 ; i < n ; i++){
		flag1 = 0,flag2 = 0;
		cin>>d1;
		if(d1>d) flag1 = 1;
		
		double temp;
		int cnt1 = 0;
		
		for(int j = 0 ; j < d1 ; j++){
			cin>>temp;
			if(temp < e) cnt1++;
		}
		
		if(cnt1 > d1/2){
			flag2 = 1;
//			cout<<temp/2<<" cnt1:"<<cnt1<<endl;	
		} 
		if(flag1==0 && flag2==1) none1++;
		if(flag1 && flag2) none++;
	}
	
	double output1 = ((double)none1/n)*100;
	double output2 = ((double)none/n)*100;
	printf("%.1f%% %.1f%%\n",output1,output2);
	return 0;
} 
