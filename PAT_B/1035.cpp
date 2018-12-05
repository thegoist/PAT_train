#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath> 
using namespace std;
int n;
int a[111];
int b[111];
int temp[111];
bool isSame(int A[] , int B[]){
	for(int i = 0 ; i < n ; i++){
		if(A[i] != B[i]) return false;
	}
	return true;
}

void mergeSort(){
	bool flag = false;
	for(int step = 2; step/2 <= n; step *= 2){
		if(step != 2 && isSame(temp,b)){
			flag = true;
		}
		for(int i = 0 ; i < n ; i += step){
			sort(temp+i , temp+min(i+step,n));
		}
		
		if(flag){
//		cout<<step
			for(int i = 0 ; i < n; i++){
				printf("%d",temp[i]);
				if(i < n-1) printf(" ");
			}
			printf("\n");
			return ;
		}
	}
	
}

bool insertSort(){
	bool flag = false;
	for(int i = 0 ; i < n ; i++){
		if(i != 1 && isSame(temp,b)){
			flag = true;
		}
		int t = temp[i],j = i;
		while(j > 0 && temp[j - i] > t){
			temp[j] = temp[j-1];
			j--;
		}
		temp[j] = t;
		if(flag){
			return true;
		}
	}
}
int main(){
	cin>>n;
	
	
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		temp[i] = a[i];
		
	} 
	for(int i = 0; i < n; i++){
		scanf("%d",&b[i]);
	} 
	int i = 0;
	int j = 0;
	for(i = n-1 ; i >= 0 && a[i]==b[i];i--);
	for(j = 0; j < i && b[j] <= b[j + 1];j++);
//	cout<<i<<" "<<j<<endl;
	if(i==j){
		cout<<"Insertion Sort"<<endl;
		sort(b,b+i+2);
		for(int i = 0 ; i < n; i++) {
			cout<<b[i];
			if(i != n-1) cout<<" ";	
		}
		cout<<endl;
	}else{
		cout<<"Merge Sort"<<endl;
		mergeSort();
	}
	
	return 0;
} 
