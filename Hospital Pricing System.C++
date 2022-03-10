#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
using namespace std;

class ho{
    public:
        void init(string,int,int,int,int);
        int gtotal();
        string gname();
    private:
        string name;
        int type;
        int day;
        int mf;
        int df;
        int total;
};

void ho::init(string n,int t,int d,int mf,int df)
{
    this->name=n;
    this->type=t;
    this->day=d;
    this->mf=mf;
    this->df=df;
    this->total = type*day+mf+df;
}

int ho::gtotal()
{
    return total;
}

string ho::gname()
{
    return name;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    string name, type, day, mf, df;
    vector<ho> set;
    while(cin >>name >> type >> day >> mf >> df)
    {
        if(type!="A"&&type!="B"&&type!="C")
        {
            continue;
        }
        if(isdigit(day.at(0))&&stoi(day)>=0&&isdigit(mf.at(0))&&stoi(mf)>=0&&isdigit(df.at(0))&&stoi(df)>=0)
        {
            ho tmp;
            if(type=="A")
            {
                tmp.init(name,a,stoi(day),stoi(mf),stoi(df));
            }
            if(type=="B")
            {
                tmp.init(name,b,stoi(day),stoi(mf),stoi(df));
            }
            if(type=="C")
            {
                tmp.init(name,c,stoi(day),stoi(mf),stoi(df));
            }
            set.push_back(tmp);
        }
    }
    // sort
    for(int i=0;i<set.size();i++)
    {
        for(int j=i+1;j<set.size();j++)
        {
            if(set[i].gtotal()<set[j].gtotal())
            {
                swap(set[i],set[j]);
            }
            if(set[i].gtotal()==set[j].gtotal()&&set[i].gname()<set[j].gname())
            {
                swap(set[i],set[j]);
            }
        }
    }
    // output
    for(int i =0;i<set.size();i++)
    {
        cout << set[i].gname() << " " << set[i].gtotal() << endl;
    }
    return 0;
}