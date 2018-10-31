#include <cstdio>
#include <iostream>
#include <map>
#include <cstring>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
	string school;
	int score;
	int stuNum;
};
bool cmp(node a , node b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else if(a.stuNum!=b.stuNum){
		return a.stuNum<b.stuNum;
	}else{
		return a.school<b.school;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	char ID[10] = {0};
	char school[10] = {0};
	string schol;
	map<string, double> scoreMap;
	map<string, int> StuNumMap;
//	multimap<int,string> output;
	int score;
	float temp;

	cin>>n;

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %s",ID,&score,school);

		if (ID[0] == 'A')
		{
			temp = score; 
		}else if (ID[0] == 'B')
		{
			temp = score/1.5;
		}else if (ID[0] == 'T')
		{
			temp = score*1.5;
		}

		for (int j = 0; j < strlen(school); j++)
		{
			if (school[j]<='Z' && school[j]>='A')
			{
				school[j] = school[j]+32;
			}
		}
		schol = school;
//		cout<<schol<<endl;
		scoreMap[schol] += temp;
		StuNumMap[schol] += 1;	
	}
	vector<node> ans;
	for (map<string, double>::iterator it = scoreMap.begin();it != scoreMap.end();it++)
	{
		ans.push_back(node{it->first,(int)scoreMap[it->first],StuNumMap[it->first]});
	}
	sort(ans.begin(),ans.end(),cmp);
	int rank = 0, pres = -1;
    printf("%d\n", (int)ans.size());
    for (int i = 0; i < ans.size(); i++) {
        if (pres != ans[i].score) rank = i + 1;
        pres = ans[i].score;
        printf("%d ", rank);
        cout << ans[i].school;
        printf(" %d %d\n", ans[i].score, ans[i].stuNum);
    }
	
	return 0;
}
