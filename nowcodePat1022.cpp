#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	map<string,int> m;
	string tempName;
	int tempNum;
	int max = 0;
	string maxName;
	scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		cin>>tempName>>tempNum;
		if(m[tempName] == 0){
			m[tempName] = tempNum;
		}else{
			m[tempName] += tempNum;
		}
	}
	map<string,int>::iterator it;
	for( it = m.begin(); it != m.end(); it++){
//		cout<<it->first<<" "<<it->second<<endl;
		if(max <= it->second){
			maxName = it->first;
			max = it->second;
		}
	}

	cout<< maxName <<" "<< max <<endl;
	return 0;
} 
