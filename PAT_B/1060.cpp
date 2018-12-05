#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp1(int x,int y){
	return x>y;
}
int main(){
	int n;
	cin>>n;
//	vector<int> v(n);
	int v[1000000];
	for(int i = 1 ; i <= n ; i++){
		cin>>v[i];
	} 
	sort(v+1,v+n+1,cmp1);
	int ans = 0;
	int f = 1;
	while(v[f]>f && ans<=n){
		f++;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
