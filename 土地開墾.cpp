#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int l, w;
    //input
    while (cin >> l >> w)
    {
        if (l == 0 && w == 0)
        {
            break;
        }
        int set[l][w], ans[l][w];
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> set[i][j];
                if (set[i][j] == 1)
                {
                    set[i][j] = 0;
                }
            }
        }
        //sort
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (set[i][j] == 0)
                {
                    ans[i][j] = 1;
                }
                if (set[i][j] == 2)
                {
                    ans[i][j] = 0;
                }
            }
        }
        //sort
        for (int i = 1; i < l; i++)
        {
            for (int j = 1; j < w; j++)
                ans[i][j] = min(ans[i - 1][j], ans[i][j - 1], ans[i - 1][j - 1]) + 1;
        }
        // testout
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << set[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}