#include<cstdio>
#include<iostream>
using namespace std;
int mp[505][505];
int main(){
	int m,n,a,b,c;
//	cin>>m>>n>>a>>b;
	while(scanf("%d%d%d%d%d",&m,&n,&a,&b,&c) != EOF){
		for(int i = 0; i < m;i++){
			for(int j = 0; j < n;j++){
				cin>>mp[i][j];
				if(mp[i][j]<=b&&mp[i][j]>=a){
					mp[i][j] = c;
				}
			}
		}
		for(int i = 0; i < m;i++){
			for(int j = 0; j < n;j++){
				if(j == n-1){
					printf("%03d",mp[i][j]);
				}else{
					printf("%03d ",mp[i][j]);
				}
			}
			printf("\n");
		}
	}

	return 0;
}
