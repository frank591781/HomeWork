#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char set[10]={'a','b','c','d','e','f','g','h','i','j'}; // data
    int n, count=1;
    cin >> n; 
    char ans[n];
    for(int i=0;i<n;i++) // n位以前全部放進ans
    {
        ans[i]=set[i];
    }
    for(int i=n;i>0;i--) // 計算有幾種排列
    {
        count*=i;
    }
    for(int i=1;i<=count;i++) // 要執行count次排列
    {
        for(int j=0;j<n;j++) 
            if(j==n-1) // 最後一個輸出不要輸出空白
            {
                cout << ans[j];
            }
            else
                cout<<ans[j]<<" ";
        cout<<endl;
        next_permutation(ans,ans+n); // *****排列組合*****
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/file.php/2630/hw7.png