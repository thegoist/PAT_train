#include <iostream>
#include <unordered_map>
#include <vector>
#include <set> 
using namespace std;
int main(){
	int m , n , k;
	cin>>m>>n>>k;
	string temp;
	unordered_map<string,int> mp;
	int flag = 1;
	int cnt = 0;
	for(int i = 1 ; i <= m ; i++){
		cin>>temp;
		if(mp[temp] !=0) k++;
		
		if(mp[temp] == 0 && i == k){
			cout<<temp<<endl;
			mp[temp]++;
			k += n;
			cnt++;
		}
		if(mp[temp] != 0){
			flag++;
		}
	}
	if(cnt == 0) cout<<"Keep going..."<<endl;
//	for(unordered_map<string,int>::iterator it = mp.begin();
//		it != mp.end();
//		it++){
//			cout<<it->first<<" "<<it->second<<endl;
//		}
	return 0;
} 
