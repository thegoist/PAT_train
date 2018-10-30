#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int mn = 200;
	int mx = 0;
	cin>>n;
	string 	minName,minStuID,maxName,maxStuID;
	string 	Name,StuID;
	int score;
	for (int i = 0; i < n; i++)
	{
		cin>>Name>>StuID>>score;
		// cout<<Name<<StuID<<" "<<score+1<<endl;
		if (mn>score)
		{
			mn = score;
			minName = Name;
			minStuID = StuID;
		}
		if (mx<score)
		{
			mx = score;
			maxName = Name;
			maxStuID = StuID;
		}
		
	}
	cout<<maxName<<" "<<maxStuID<<endl;
	cout<<minName<<" "<<minStuID<<endl;
	return 0;
}
