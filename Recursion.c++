#include<iostream>
using namespace std;

long long ans[35][35];
bool check[35][35];

long long f(long long x,long long y)
{
    if(x==0||y==0)
        return 1;
    if(check[x][y])
        {
            return ans[x][y];
        }
    ans[x][y]=f(x-1,y)+f(x,y-1);
    check[x][y]=true;
    return ans[x][y];
}

int main()
{
    long long  m,n;
    cin >> m >> n;
    cout << f(m,n) << endl;
}

//https://e-tutor.itsa.org.tw/e-Tutor/file.php/2628/HW6_4.jpg