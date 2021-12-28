#include<iostream>
#include<vector>
using namespace std;

vector<string> gray_code(int n) //回傳尾字串
{
    vector<string> ans; //最後的總字串
    if(n==1)  //1bit
    {
        ans.push_back("0");//  1bit 0
        ans.push_back("1");//       1 
        return ans;        //回傳 ans={"0","1"}
    }
    else
    {
        vector<string> back; //記住首位以外的所有字串
        back=gray_code(n-1);  //重複遞迴
        for(int i=0;i<back.size();i++) //首位0 從前面開始輸出
        {
            ans.push_back("0"+back[i]); //首位"0"+所有尾數= ans所有字串前面+"0"
        }
        for(int i=back.size()-1;i>=0;i--) //首位1 從後面開始輸出 造成鏡射
        {
            ans.push_back("1"+back[i]); //首位"1"+所有尾數,要和首位=0的成鏡射= ans所有字串前面+"1"
        }
        return ans;    //ans=首位"0"+首位"1"的所有字串 //n=2 return ans{"00"}                
    }                                                //              {"01"}
}                                                    //              {"11"} 
                                                     //              {"10"}

int main()
{
    int n;
    vector<string> output;  
    while(cin >> n)
    {
        output=gray_code(n);
        for(int i =0;i<output.size();i++)
        {
            cout << output[i] << endl;
        }
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/file.php/2628/HW6_1.jpg
//https://e-tutor.itsa.org.tw/e-Tutor/file.php/2628/HW6_2.jpg