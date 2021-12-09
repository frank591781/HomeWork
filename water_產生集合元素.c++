#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> set ; //定義vector
    set.push_back(1);
    int n;
    cin >> n;
    int current = 0, val;
    for(;set.size() < n;)
    {
        val = set[current++];
        set.push_back(val * 2 + 1);
        set.push_back(val * 3 + 1);
    }
    sort(set.begin(), set.end());
    for(int i=0;i<n;i++)
    {
        cout << set[i] <<endl;
    }
    return 0;
}