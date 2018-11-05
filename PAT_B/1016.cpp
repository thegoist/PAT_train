#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std; 
char pa[100005],pb[100005];
int main(){
	int da,db;
	int da_cnt = 0;
	int db_cnt = 0;
	cin>>pa>>da>>pb>>db;
	for(int i = 0; i < strlen(pa);i++){
		if(pa[i]-'0' == da){
			da_cnt++;
		}
	}
	for(int i = 0; i < strlen(pb);i++){
		if(pb[i]-'0' == db){
			db_cnt++;
		}
	}	
	int a = 0,b = 0;
	for(int i = 0; i < da_cnt; i++){
		a  = a*10;
		a = a + da;
	}
	for(int i = 0; i < db_cnt; i++){
		b  = b*10;
		b = b + db;
	}
	cout<<a+b<<endl;
	return 0;
}
