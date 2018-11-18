#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	int n;
	map<int,int> mp;
	cin>>n;
	int x,y;
	for(int i = 0 ; i < n ; i++){
		cin>>x>>y;
//		cout<<mp[x]<<endl;
		mp[x] += y;
	}
	int maxX = 0,maxY = 0;
	for(map<int,int>::iterator it = mp.begin();it != mp.end(); it++){
//	cout<<it->first<<" "<<it->second<<endl;
		if(maxY < it->second){
			maxX = it->first;
			maxY = it->second;
		}
	}
	cout<<maxX<<" "<<maxY<<endl;
	return 0;
}
