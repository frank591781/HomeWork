#include<iostream>
using namespace std;

int main()
{
	int P, N, t, n, m,i,pm[100],j,per;
	cin >> P >> N; //�X�ӫȤH,�X�����
	// �]�w��¦�� �C�ӤH�@�}�l���O0��
	for (i = 0; i < P; i++)
	{
		pm[i] = 0;
	}
	//�������
	for (j = 0; j < N; j++)
	{
		cin >> n >> t >> m; //��n��ȤH,t=1�s��,t=2��X,money
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
		cout << "��" << per << "��ȤH : " << pm[i] << "��" << endl;
		per++;
	}
	return 0;
}