#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool up(int x,int y)
{
    return x>y;
}

int main()
{
    int n,plus;
    vector<int> set,ans1,ans2;
    //input
    while(cin >> n)
    {
        set.push_back(n);
    }
    //sort 1 descending power
    sort(set.begin(),set.end(),up);
    // sort 2 
    int cal =1;
    for(int i =0;i<set.size();i++)
    {
        if(set[i]==set[i+1])
        {
            cal++;
            continue; //pass loop
        }
        else if(set[i]!=set[i+1])
        {
            ans1.push_back(set[i]);
            ans2.push_back(cal);
            cal=1;
        }
    }
    //output test
    for(int i=0;i<ans1.size();i++)
    {
        cout << ans1[i] << " " << ans2[i] <<endl;
    }
    return 0;
}
//題目 https://cdn.discordapp.com/attachments/371614756357799937/918395672208764978/unknown.png