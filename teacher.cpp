#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class FruitShop
{
public:
    int n1, n2, n3;
    int sales;
    string name;

};

bool cmp(FruitShop f1, FruitShop f2)
{
    if (f1.sales > f2.sales)
        return false;
    return true;
}

int main()
{
    vector <FruitShop> fs;
    int n, w1, w2, w3, p1, p2, p3;

    cin >> n >> w1 >> w2 >> w3 >> p1 >> p2 >> p3;
    for (int i = 0; i < n; i++)
    {
        FruitShop f;
        cin >> f.name >> f.n1 >> f.n2 >> f.n3;
        f.sales = w1 * p1 * f.n1 + w2 * p2 * f.n2 + w3 * p3 * f.n3;
        fs.push_back(f);
    }
    sort(fs.begin(), fs.end(), cmp);
    for (int i = 0; i < fs.size(); i++)
        cout << fs[i].name << " " << fs[i].n1 << " " << fs[i].n2 << " " << fs[i].n3 << " " << fs[i].sales << endl;
    return 0;
}