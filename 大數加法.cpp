#include<iostream>
#include<string>
using namespace std;

int main()
{
	int	N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a, b;
		cin >> a >> b;
		int set_a[a.length() + 1];
		int set_b[b.length() + 1];
		int sum[a.length() + 1];
		int digit = 0;
		for (int i = a.length(); i >= 0; i--)
		{
			set_a[digit] = a.at(i);
			digit++;
		}
		digit = 0;
		for (int i = b.length(); i >= 0; i++)
		{
			set_b[digit] = b.at(i);
			digit++;
		}
		for(int i =0;i<)
	}
}