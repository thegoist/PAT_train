#include<iostream>
#include<cmath>
using namespace std;
// 1082
int main(){
	int n ;
	cin>>n;getchar();
	string id;
	int tempX,tempY;
	string max_id,min_id;
	int max_s = 0,min_s = 99999999;
	for(int i = 0 ; i < n ; i++){
		cin>>id>>tempX>>tempY;
		int dis = tempX*tempX + tempY*tempY;
		if(dis>max_s) max_id = id, max_s = dis;
		if(dis<min_s) min_id = id, min_s = dis;
	}
	
	cout<<min_id<<" "<<max_id<<endl;
	return 0;
} 
