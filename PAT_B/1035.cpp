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
	for(int i = 1 ; i < n ; i++){
		if(i != 1 && isSame(temp,b)){
			flag = true;
		}
		
		int t = temp[i],j = i;
		while(j > 0 && temp[j - 1] > t){
			temp[j] = temp[j-1];
			j--;
		}
		temp[j] = t;
		if(flag==true){
			return true;
		}
	}
	return false;
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

	if(insertSort()){
		cout<<"Insertion Sort"<<endl;
		
		for(int i = 0 ; i < n; i++) {
			cout<<temp[i];
			if(i != n-1) cout<<" ";	
		}
		cout<<endl;
	}else{
		for(int i = 0 ; i < n ; i++){
			temp[i] = a[i];
		}
		cout<<"Merge Sort"<<endl;
		mergeSort();
	}
	
	return 0;
} 
