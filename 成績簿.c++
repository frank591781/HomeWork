#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string name;
    vector<int> eng_set,math_set,chinese_set,total_set; //every single data per vector
    vector<string> name_set;
        //input
    while(cin >> name)
    {
        int e,m,c,total;
        cin >> e >> m >> c;
        total=e+m+c;
        name_set.push_back(name);
        eng_set.push_back(e);
        math_set.push_back(m);
        chinese_set.push_back(c);
        total_set.push_back(total);
        if(e>100||m>100||c>100||e<0||m<0||c<0)
        {
            name_set.pop_back();
            eng_set.pop_back();
            math_set.pop_back();
            chinese_set.pop_back();
            total_set.pop_back();
        }
    }
        //sort descending power
    for(int i=0;i<total_set.size();i++)
    {
        for(int j=i+1;j<total_set.size();j++)
        {
            if(total_set[i]<total_set[j])
            {
                swap(total_set[i],total_set[j]);
                swap(name_set[i],name_set[j]);
                swap(eng_set[i],eng_set[j]);
                swap(math_set[i],math_set[j]);
                swap(chinese_set[i],chinese_set[j]);
            }
        }
    }
        //sort total==total
    for(int i=0;i<name_set.size();i++)
    {
        for(int j=i+1;j<name_set.size();j++)
        {
            if(total_set[i]==total_set[j])
            {
                if(name_set[i]>name_set[j])
                {
                    swap(total_set[i],total_set[j]);
                    swap(name_set[i],name_set[j]);
                    swap(eng_set[i],eng_set[j]);
                    swap(math_set[i],math_set[j]);
                    swap(chinese_set[i],chinese_set[j]);
                }
            }
        }
    }
        // output
    for(int i=0;i<total_set.size();i++)
    {
        cout << name_set[i] << " " << eng_set[i] << " " << math_set[i] << " " << chinese_set[i] << " " << total_set[i] << endl;
    }
    return 0;
}

/*題目  https://e-tutor.itsa.org.tw/e-Tutor/file.php/2627/HW5_3.jpg
        https://e-tutor.itsa.org.tw/e-Tutor/file.php/2627/HW5_4.jpg*/
