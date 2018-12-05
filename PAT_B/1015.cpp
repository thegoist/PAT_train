#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
struct node{
	char id[10];
	int s1;
	int s2;
	int sum;
	int flag;//4ÀàÑ§Éú 
};
bool cmp1(node x, node y){
	if(x.flag != y.flag) return x.flag > y.flag; 
	else if(x.sum != y.sum) return x.sum > y.sum;
	else if(x.s1 != y.s1) return x.s1 > y.s1;
	else  return strcmp(x.id,y.id)<0;
}
int main(){
	int n,l,h;
	char t_id[10];
	int t_s1,t_s2;
	int cnt = 0;
	scanf("%d %d %d",&n,&l,&h);
	vector<node> v(n);
	for(int i = 0 ; i < n ; i++){
		scanf("%s %d %d",&t_id,&t_s1,&t_s2);
		if(t_s1 >= l && t_s2 >=l){
			cnt++;
			node temp;
//			temp.id = t_id;
			for(int j = 0 ; j < 10 ; j++) temp.id[j] = t_id[j]; 
			temp.s1 = t_s1;
			temp.s2 = t_s2;
			temp.sum = t_s1 + t_s2;
			if(t_s1 >= h && t_s2 >= h) temp.flag = 4;
			else if(t_s1 >= h && t_s2 < h) temp.flag = 3;
			else if(t_s1 >= t_s2 ) temp.flag = 2;
			else temp.flag = 1;
			v.push_back(temp);
		}
	}
	sort(v.begin(),v.end(),cmp1);
	printf("%d\n",cnt);
//	for(vector<node>::iterator it = v.begin() ; it != v.end() ; it++){
//		printf("%s %d %d\n", *it.id,*it.s1,*it.s2);
//	}
	for(int i = 0 ; i < cnt; i++){
		printf("%s %d %d\n",v[i].id,v[i].s1,v[i].s2);
	}
	return 0;
}
