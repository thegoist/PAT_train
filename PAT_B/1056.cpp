#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	set<int> s;
	for(int i = 0 ; i < n; i++){
		cin>>v[i];
	}
	int temp;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			temp = v[i]*10 + v[j];
			s.insert(temp);
		}
	}
	int sum = 0;
	for(set<int>::iterator it = s.begin() ; it != s.end() ; it++){
		cout<< *it<<endl;
		sum += *it;
	}
	cout<<sum<<endl;
	return 0;
} 
