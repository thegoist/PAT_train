#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp;
//	map<int,int> mp;
	set<int> s1;
	for(int i = 1; i <= n; i++){
		temp = i/2 + i/3 + i/5;
//		mp[temp] += 1;
//		cout<<temp<<endl;
		s1.insert(temp);
	}
	cout<<s1.size()<<endl;
	return 0;
} 
