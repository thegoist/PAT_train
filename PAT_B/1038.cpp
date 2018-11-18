#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> a;
	vector<int> b;
	int temp;
	for(int i = 0; i < n; i++) cin>>temp,a[temp]+=1;
	int k;
	cin>>k;
	for(int i = 0; i < k; i++) cin>>temp,b.push_back(temp);
	
	for(vector<int>::iterator it = b.begin(); it != b.end() ; it++){
//		cout<<*it<<endl;
		cout<<a[*it];
		if(it!=b.end()-1) cout<<" ";
	}
	cout<<endl;
	
	return 0;
}
