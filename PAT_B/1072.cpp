#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
int main(){
	int n , m;
	cin>>n>>m;
//	map<string,vector<int>> m;
	set<int> dnd;
	int temp;
	
	for(int i = 0 ; i < m ; i++){
		cin>>temp;
		dnd.insert(temp);
	}
	
	string name;
	int num;
	int flag = 0;
	int flag1 = 0;
	int stu_cnt = 0;
	int things_cnt = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>name>>num;
		flag = 0;
		flag1 = 0;
		for(int j = 0 ; j < num; j++){
			cin>>temp;
			if(dnd.count(temp)){
				flag1 = 1;
				things_cnt++;
				if(!flag){
					stu_cnt++;
					cout<<name<<": ";
					printf("%04d",temp);
					flag = 1;
				} 
				else{
					printf(" %04d",temp);
				} //cout<<" "<<temp;
			}
		}
		if(flag1){
		cout<<endl;		
		}
	}
	cout<<stu_cnt<<" "<<things_cnt<<endl;
	return 0;
}
