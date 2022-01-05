#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> set;
    int tmp;
    // input 
    while(cin >> tmp)
    {
        set.push_back(tmp);
    }
    // sort
    vector<int> comp; //comp為最後輸出的解答 應該要輸出最長的那個數列
    int c=1; // 計數器c 原本自己就算一個元素 所以=1
    for(int i=0;i<set.size();i++)
    {
        if(set[i]==set[i+1]) // 如果元素相等就讓計數器+1 然後跳過這個迴圈 繼續執行下個迴圈
        {
            c++;
            continue;
        }
        if(set[i]!=set[i+1]) // 當發現元素不相等 就代表換數列了 先去判斷comp這個vector的size()有沒有小於c 小於c就代表 c計算過的那個數列長度是大於comp的
        {
            if(comp.size()<c)
            {
                comp.clear();  // 先清空comp原本記錄得數列
                for(int j=1;j<=c;j++)
                {
                    comp.push_back(set[i]); //把判斷到的"更長數列"丟進去comp
                }
            }
            c=1; //回歸初始值1
        }
    }
    // output
    for(int i=0;i<comp.size();i++)
    {
        if(i==comp.size()-1) // 輸出的最後不能有空白
        {
            cout << comp[i];
        }
        else
            cout << comp[i] << " ";
    }
    cout <<endl; //答案跟答案之間要換行
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/file.php/2630/HW7_2.jpg