#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int eng, math, ch, total;
};

bool compare(Student s1,Student s2)
{
    if (s1.total == s2.total)
    {
        return s1.name < s2.name;
    }
    return s1.total > s2.total;
}

int main()
{
    vector <Student> scorebook;
    Student tmp;
    while (cin >> tmp.name >> tmp.eng >> tmp.math >> tmp.ch)
    {
        if (tmp.eng < 0 || tmp.eng>100)
            continue;
        if (tmp.math < 0 || tmp.math>100)
            continue;
        if (tmp.ch < 0 || tmp.ch>100)
            continue;
        tmp.total = tmp.eng + tmp.math + tmp.ch;
        scorebook.push_back(tmp);
    }
    sort(scorebook.begin(), scorebook.end(), compare);
    for (int i = 0; i < scorebook.size(); i++)
        cout << scorebook[i].name << " " << scorebook[i].eng << " " << scorebook[i].math << " " << scorebook[i].ch << endl;
    return 0;
}