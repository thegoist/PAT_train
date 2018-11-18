#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
vector<int> a;
vector<int> b;

//bool judge(int x,int pos){
////	cout<<x<<" "<<pos<<endl;
//	//向前检查
////	int flag = 0;
////	if(a[pos]>b.end()){
////		flag = 1;
////	}
//	for(vector<int>::iterator it = a.begin()+pos-1; it != a.begin() ; it--){
////		cout<<*it<<" "<<endl;
//		if(*it > x) return false;
//	}
//	//向后检查
//	for(vector<int>::iterator it = a.begin()+pos-1; it != a.end() ; it++){
//		if(*it < x) return false;
//	}
//	
//	return true; 
//}
int main(){
	int n;
	cin>>n;
	int temp;
	int counter = 0;
	for(int i = 0; i < n; i++) cin>>temp,a.push_back(temp),b.push_back(temp);
	vector<int> c(a.size());
	
	sort(a.begin(),a.end());
	
	int mx = 0;
	for(int i = 0; i < a.size() ; i++){
		if(a[i] == b [i] && b[i]>mx){
			c[counter++] = b[i];
		}
		if(mx<b[i]) mx = b[i];
	}
	cout<<counter<<endl;
	for(int i = 0; i < counter; i++){
		cout<<c[i];
		if(i!=counter-1) cout<<" ";
	}
	cout<<endl;
	
	
//	int counter = 0;
//	int pos = 0;
//	for(vector<int>::iterator it = a.begin(); it != a.end() ; it++){
//		pos++;
//		if(judge(*it,pos)) counter++,b.push_back(*it);
//	}
//	
//	cout<<counter<<endl;
//	
//	for(vector<int>::iterator it = b.begin(); it != b.end() ; it++){
//		cout<<*it;
//		if(it!=b.end()-1) cout<<" ";
//	}
//	cout<<endl;
	
	return 0;
}
