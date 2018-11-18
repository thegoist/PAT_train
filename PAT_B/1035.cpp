#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	
	for(int i = 0; i < n; i++) cin>>a[i];
	for(int i = 0; i < n; i++) cin>>b[i];
	int i = 0;
	int j = 0;
	for(i = n-1 ; i >= 0 && a[i]==b[i];i--);
	for(j = 0; j < i && b[j] <= b[j + 1];j++);
//	cout<<i<<" "<<j<<endl;
	if(i==j){
		cout<<"Insertion Sort"<<endl;
		sort(b.begin(),b.begin()+i+2);
		for(int i = 0 ; i < n; i++) {
			cout<<b[i];
			if(i != n-1) cout<<" ";	
		}
		cout<<endl;
	}
	
	return 0;
} 
