#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0)
            cout << "0 ";
        else
            cout << "1 ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            cout << "0 ";
        else
            cout << "1 ";
    }
}