#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int n ;
	cin>>n;
	map<int,int> m1,m2;
	int id1,id2;
	for(int i = 0 ; i < n ; i++){
		cin>>id1>>id2;
		m1[id1] = id2;
		m2[id2] = id1;
	}
	cin>>n;
	int id_t;
	set<int> ans1;
	vector<int> ans2;
	for(int i = 0 ; i < n ; i++){
		cin>>id_t;
		ans1.insert(id_t);
	}
	for(auto it = ans1.begin() ; it != ans1.end() ; it++){
//		if(m[*it] == 0) continue;
//		cout<<m[*it]<<endl;
		if(ans1.count(m1[*it]) == 0 && ans1.count(m2[*it]) == 0) ans2.push_back(*it);
	}
	
	
	cout<<ans2.size()<<endl;
	int flag = 1;
	sort(ans2.begin(),ans2.end());
	for(int i = 0 ; i < ans2.size(); i++){
		if(flag) flag = 0;
		else cout<<" ";
		printf("%05d",ans2[i]); // 注意输出的格式   00001 
	}
	
	return 0;
}
