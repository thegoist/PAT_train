//奇妙的测试点5 没过去 本题采用暴力模拟 
#include<iostream>
#include<cstdio>
#include<map>
#include<cmath>
using namespace std;
int mp[1005][1005];
map<int,int> book;
int m,n,tol;
int next_p[8][2] = {{0,1},{1,0},{0,-1},{-1,0},
				{1,1},{1,-1},{-1,-1},{-1,1}};
int ans_x,ans_y;
int flag = 0,cnt = 0;
void check(int x,int y){
	int tx,ty;
	for(int i = 0; i < 8 ; i++){
		tx = x+next_p[i][0];
		ty = y+next_p[i][1];
		if(tx<0 || tx>m || ty<0 || ty>n){
			flag = 0;
			continue;
		}
		if(abs(mp[x][y] - mp[tx][ty]) > tol ){
			flag = 1;
		}else{
			flag = 0;
			return ;
		}
	}
	
	if(flag) {
		ans_x = x,ans_y = y,cnt++;
//		cout<<cnt<<" "<<ans_x<<" "<<ans_y<<" "<<mp[ans_x][ans_y]<<endl;
	}
	
}
int main(){
	cin>>n>>m>>tol;
	
	for(int i = 0; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin>>mp[i][j];
			book[mp[i][j]]++;
		}
	}
	for(int i = 0; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(book[mp[i][j]] == 1) check(i,j);
//			if(flag) break;
		}
//		cout<<endl;
//		if(flag) break;
	}
	if(cnt==1) cout<<"("<<ans_y+1<<", "<<ans_x+1<<"): "<<mp[ans_x][ans_y];
	else if(cnt>1) cout<<"Not Unique";
	else if(cnt==0) cout<<"Not Exist";
	return 0;
} 
