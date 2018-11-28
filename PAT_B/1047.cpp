#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	int n;
	map<int,int> mp;
	cin>>n;
	int team_id,id,score;
	for(int i = 0 ; i < n ; i++){
		scanf("%d-%d %d",&team_id,&id,&score);
//		cout<<team_id<<id<<score<<endl;
		mp[team_id] += score;
	}
	int mx = 0,mx_team;
	for(map<int,int>::iterator it = mp.begin() ; it != mp.end() ; it++){
		if(it->second > mx){
			mx = it->second;
			mx_team = it->first;
		}
	}
	cout<<mx_team<<" "<<mx<<endl;
	return 0;
}
