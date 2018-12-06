#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	int next;
}node[1000];
int main(){
	node[1].next = 2;
	node[1].data = 1;
	node[2].next = 3;
	node[2].data = 2;
	node[3].next = -1;
	int s = 1;
	while(node[s].next != -1){
		cout<<node[s].data<<endl;
		s = node[s].next;
	}
	cout<<node[s].data<<endl;
	return 0;
} 
