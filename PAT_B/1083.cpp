#include<iostream>
//#include<vector>
//#include<cmath>
#include<map>
// ≤‚ ‘µ„2 3  
using namespace std;
int main(){
	int n;
//	map<int,int> m;
	int a[10000] = {0};
	cin>>n;
	int temp;
	for(int i = 1 ; i <= n ; i++){
		cin>>temp;
		temp = abs(temp - i);
//		m[temp] += 1;
		a[temp] += 1;
	}
//	for(map<int,int>::iterator it = m.end() ; it != m.begin() ; it--){
//		if(it->second >= 2) cout<<it->first<<" "<<it->second<<endl;
//	}
	for(int i = 9999; i >= 0 ; i--){
		if(a[i] >= 2) cout<<i<<" "<<a[i]<<endl;	
	}
	return 0;
}
