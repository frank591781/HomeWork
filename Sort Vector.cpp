#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b)
{
    if (a < b)
        return false;
    else
        return true;
}

int main()
{

    vector <int> num;
    int n;

    while (cin >> n)
        num.push_back(n);

    sort(num.begin(), num.end(), cmp);
    for (int j = 0; j < num.size(); j++)
        cout << num[j] << " ";
    cout << endl;
    return 0;
}
