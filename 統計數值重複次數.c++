#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool wateridiot(int x,int y)  //降冪function
{
    return x>y;
}

int main()
{
    int n,i,j,cnt;
    vector<int> a;
    vector<int> a_cnt;
    //input
    while(cin >> n) 
    {
        a.push_back(n); //動態陣列
    }
    //sort
    sort(a.begin(),a.end(),wateridiot);
    for(i=0;i<a.size();i++)
    {
        cnt=1;
        for(j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
            }
        }
        a_cnt.push_back(cnt);
    }
    //output
    for(i=0;i<a.size();i++)
    {
        cout << a[i]<<" "<<a_cnt[i]<<endl;
    }
    return 0;
}
//題目 https://cdn.discordapp.com/attachments/371614756357799937/918395672208764978/unknown.png