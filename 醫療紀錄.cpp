#include<iostream>
#include<string>
#include<vector>
using namespace std;

class hms {
public:
	void getpirce(int x, int y, int z) 
	{
		A = x, B = y, C = z;
	}
	void getdata(string name, string type, int day, int drugfee, int medicalfee)
	{
		this->name = name;
		this->type = type;
		this->day = day;
		this->drugfee = drugfee;
		this->medicalfee = medicalfee;
	}


private:
	string name, type;
	int day, drugfee, medicalfee;
	int A;
	int B;
	int C;
};

int main()
{
	hms list;
	vector<hms> ansset;
	string na, tp;
	int d, df, mf;
	int a, b, c;
	cin >> a >> b >> c;
	list.getpirce(a, b, c); //ªì©l¤Æ
	while (cin >> na >> tp >> d >> df >> mf)
	{
		list.getdata(na, tp, d, df, mf);
		if ((tp != "A" || tp != "B" || tp != "C") || (d < 0) || (df < 0) || (mf < 0)) //datatype not yet
			continue;
		ansset.push_back()
	}
}