#include<iostream>
#include<vector>
#include<algriothm>
using namespace std;
struct stu{
	string name;
	int height;
};
bool cmp(stu s1, stu s2){
	return s1.height<s2.height;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<stu> v;
	stu temp;
	for(int i = 0 ; i < n ;i++){
		cin>>temp.name>>temp.height;
		v.push_back(temp);
	}
	sort(v.begin() , v.end() , cmp)
	int m = n/k/2 + 1;
	
	return 0;
}
