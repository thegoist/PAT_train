#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int n;
	char a[50],b[50];
	double temp;
	double sum = 0.0;
	int cnt = 0;
	cin>>n;
	for(int i = 0 ; i < n; i++){
		scanf("%s",a);
//		sscanf(a,"%.lf",&temp);
//		sprintf(b,"%.2lf",temp);
		sscanf(a, "%lf", &temp);
        sprintf(b, "%.2lf",temp);
//		cout<<a<<" "<<b<<endl;
		int flag = 0;
		
		for(int j = 0 ; j < strlen(a) ; j++)
		{
//			cout<<a[j]<<" "<<b[j]<<endl;
			if(a[j] != b[j]) flag = 1;
		}
		if(flag || temp > 1000 || temp < -1000){
			printf("ERROR: %s is not a legal number\n",a);
			continue;
		}else{
			
			sum += temp;
			cnt++;
//			cout<<cnt<<endl;
		}
	}
	if(cnt == 1){
		printf("The average of 1 number is %.2lf", sum);
	}else if(cnt > 1){
		printf("The average of %d number is %.2lf",cnt, sum/cnt);
	}else{
		printf("The average of 0 number is Undefined");
	}
	return 0;
}
