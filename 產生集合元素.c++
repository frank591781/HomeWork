#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool RaisingPower(int x,int y) //raisingpower sort
{
    return x<y;
}

int main()
{
    int n,digits,val;
    cin >> n;
    vector<int> set;
    vector<int> ansset;
    set.push_back(1);
    digits=0;
    //function confirm
    while(digits<=n+10)
    {
        val=set[digits];
        set.push_back(2*val+1);
        set.push_back(3*val+1);
        sort(set.begin(),set.end(),RaisingPower);
        digits++;
    }
    //delete the same number
    for(int i=0;i<n+10;i++)
    {
        if(set[i]==set[i+1])
        {
            continue;
        }
        ansset.push_back(set[i]);
    }
    //test output
    for(int i =0;i<n;i++)
    {
        cout << ansset[i]<<endl;
    }
    return 0;
}
//https://cdn.discordapp.com/attachments/371614756357799937/920685532193898526/unknown.png