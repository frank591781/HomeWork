#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int c,A,B;
	cin >> c;
	vector<char> ans, input;
	for (int i = 0; i < c; i++)
	{
		A = 0, B = 0;
		for (int i = 0; i < 4; i++)
		{
			char t;
			cin >> t;
			ans.push_back(t);
		}
		for (int i = 0; i < 4; i++)
		{
			char t;
			cin >> t;
			input.push_back(t);
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (input[i] == ans[j])
				{
					if ((input[j] == ans[j])|| input[i] == ans[i])
					{
						A++;
					}
					else
					{
						B++;
					}
				}
			}
		}
		cout << A << "A" << B << "B" << endl;
	}
	return 0;
}