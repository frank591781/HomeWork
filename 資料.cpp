#include<iostream>
#include<string>
using namespace std;

class shopmember {
public:
	int month, birthday;
	string name, phone, sexual,mid;
};

int main()
{
	int m, n, c = 0, male=0, female=0;
	cin >> m >> n;
	shopmember user[n];
	shopmember list[n];
	for (int i = 0; i < n; i++)
	{
		cin >> user[i].mid >> user[i].name >> user[i].phone >> user[i].month >> user[i].birthday >> user[i].sexual;
		if (user[i].month == m)
		{
			list[c] = user[i];
			c++;
		}
	}
// 	for(int i =0;i<c;i++)
// 	{
// 	    cout << user[i].name<<endl;
// 	}
	for (int i = 0; i < c; i++)
	{
		for (int j = i + 1; j < c; j++)
		{
			if (list[i].birthday > list[j].birthday)
			{
				swap(list[i], list[j]);
			}
		}
	}
	for (int i = 0; i < c; i++)
	{
		if (list[i].sexual == "男")
		{
			male++;
		}
		else
			female++;
		cout << list[i].mid << " " << list[i].name << " " << list[i].phone << " " <<  list[i].month << " "<<  list[i].birthday << " " << list[i].sexual << endl;
	}
	cout << "男 " << male <<endl;
	cout << "女 " << female <<endl;
	return 0;
}