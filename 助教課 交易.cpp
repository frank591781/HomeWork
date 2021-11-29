#include<iostream>
using namespace std;

int main()
{
	int P, N, t, n, m,i,pm[100],j,per;
	cin >> P >> N; //幾個客人,幾筆交易
	// 設定基礎值 每個人一開始都是0元
	for (i = 0; i < P; i++)
	{
		pm[i] = 0;
	}
	//交易次數
	for (j = 0; j < N; j++)
	{
		cin >> n >> t >> m; //第n位客人,t=1存款,t=2支出,money
		if (t == 1)
		{
			pm[n - 1] += m;
		}
		if (t == 2)
		{
			pm[n - 1] -= m;
		}
	}
	//out
	per = 1;
	for (i = 0; i < P; i++)
	{
		cout << "第" << per << "位客人 : " << pm[i] << "元" << endl;
		per++;
	}
	return 0;
}