#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> s;
	string temp;
	for(int i = 0; i < n;i++){
		int sum = 0;
		cin>>temp;
		for(int i = 0 ; i < temp.size() ; i++){
			sum += temp[i] - '0';
		}
		s.insert(sum);
	}
	cout<<s.size()<<endl;
	int flag = 1;
	for(auto it = s.begin() ; it != s.end() ; it++){
		if(flag) flag = 0;
		else cout<<" ";
		cout<<*it;
	}
	return 0;
}
