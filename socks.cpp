#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n,m; 
	cin >> n; //n type for.1 depend on n
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
					set[a]="0";
                    set[b]="0";
				}
			}
		}
        int counter =0;
        for(int i =0;i<set.size();i++)
        {
            if(set[i]!="0")
            {
                counter++;
            }
        }
        set.clear();
        cout << counter << endl;
        // for(int i=0;i<set.size();i++)
        // {
        //     cout << set[i] << endl;
        // }
        // set.clear();
    }
    return 0;
}
