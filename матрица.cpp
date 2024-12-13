#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> goyda(string a) {
    vector<string> v;
    stringstream ss(a);
    string w;
    while (ss >> w) {
        v.push_back(w);
    }
    return v;
}
int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Исходная матрица:" << endl;
    string a;
    int b = 0;
    getline(cin, a);
    vector<string> fimoz = goyda(a);
    vector<vector<string>> abaudno(fimoz.size(), vector<string>(fimoz.size()));


    for (int i = 0; i < fimoz.size(); i++) {
        for (int g = 0; g < fimoz.size(); g++) {
            abaudno[g][b] = fimoz[g];
        }

        if (i < fimoz.size() - 1) {
            getline(cin, a);
            fimoz = goyda(a);
            b++;
        }
    }

    cout << "Транспоинрованная матрица:" << endl;
    for (int i = 0; i < abaudno.size(); i++) {
        for (int j = 0; j < abaudno[i].size(); j++) {

            cout << abaudno[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}