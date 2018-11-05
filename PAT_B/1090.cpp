#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
	int n,m;
	map<int,vector<int> > mp;
	int a,b;
	int num;
	while(scanf("%d%d",&n,&m) != EOF){
		for(int i = 0; i < n;i++){
			scanf("%d%d",&a,&b);
			mp[a].push_back(b);	
		}
//		int arr[100000] = {0};
		
		for(int i = 0; i < m; i++){
			cin>>num;
			vector<int> v(num);
			int temp;
//			cout<<num<<endl;
			for(int j = 0; j < num;j++){
//				cout<<j<<endl;
				cin>>v[j];
//				v.push_back(temp);
//				arr[v[i]] = 1;
			}
			int flag = 0;
			for(int j = 0; j < num ; j++){
				for(int p = 0; p < mp[v[j]].size();p++){
					for(int t = 0; t < num; t++){
						if(mp[v[j]][p] == v[t]){
							flag = 1;
						cout<<"No"<<endl;
							break;
						}
						if(flag == 1){
						break;
						}		
					}
					
					if(flag == 1){
						break;
					}
				}
					if(flag == 1){
						break;
					}	
			}
			if(flag == 0){
				cout<<"Yes"<<endl;
			}
	
		
		}
	}
	return 0;
}
