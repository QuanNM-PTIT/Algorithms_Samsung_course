#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x > 0)
            ans += 2 * x;
    }
    cout << ans;
}