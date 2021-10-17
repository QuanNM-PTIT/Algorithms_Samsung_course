#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;
        int a[1003];
        for (int i = 0; i < s.size(); ++i) {
            a[i] = s[i] - '0';
        }
        int ok = 1;
        int j = s.size() - 1;
        while(a[j]) --j;
        if(j < 0) {
            for (int i = 0; i < s.size(); ++i)
                cout << '0';
        } else {
            a[j] = 1;
            for (int i = j + 1; i < s.size(); ++i)
                a[i] = 0;
            for (int i = 0; i < s.size(); ++i)
                cout << a[i];
        }
        cout << endl;
    }
}
