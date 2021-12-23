#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    string name;
    int a, b, c, i=0;
    map<string, int> all;
    
    while (cin >> name >> a >> b >> c) {
        if (a > 100 || a < 0 || b > 100 || b < 0 || c > 100 || c < 0) continue;
        string string_total = to_string(a) + " " + to_string(b) + " " + to_string(c);
        all.insert(pair<string, int>(name+ " " + string_total, a + b + c));
        i++;
    }
    
    vector<string> fuck;
    vector<int> fuck2;
    
    for (auto a : all) {
        fuck.push_back(a.first);
        fuck2.push_back(a.second);
    }
    
    for (int j=0 ; j < i; j++) {
        for (int k=j + 1; k < i; k++) {
            if (fuck2[j] < fuck2[k]) {
                swap(fuck2[j], fuck2[k]);
                swap(fuck[j], fuck[k]);
            }
        }
    }
    
    for (int j=0; j < i; j++) {
        cout << fuck[j] << " " << fuck2[j] << endl;
    }

    return 0;
}