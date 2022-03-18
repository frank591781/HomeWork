#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n,m; 
	cin >> n;
	vector<int> tmp;
	vector<string> set;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		tmp.push_back(m);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < tmp[i]; j++)
		{
			string type;
			cin >> type;
			set.push_back(type);
		}
		for (int a = 0; a < set.size(); a++)
		{
			for (int b = a + 1; b < set.size(); b++)
			{
				if (set[a] == set[b])
				{
					swap(set[a])
				}
			}
		}
	}
}