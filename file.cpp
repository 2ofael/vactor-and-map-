#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,vector<int>>m;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			m[x].push_back(i);
		}
		int f=1;
		for(auto x:m)
		{
			if(x.second.size()==1)
			{
				cout<<x.second[0]<<"\n";
				f=0;
				break;
			}
		}
		if(f==1)
			cout<<-1<<"\n";
	}
}
