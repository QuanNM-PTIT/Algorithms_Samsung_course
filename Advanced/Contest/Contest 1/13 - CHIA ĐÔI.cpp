#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long


int main()
{
    faster();
    int t;
    cin >> t;
    ll ans[33][33], res = 0;
    ans[0][0] = 0;
    ans[0][1] = 1;
    ans[1][0] = 1;
    for (int i = 0; i <= 30; i++) {
        for (int j = 0; j <= 30; j++ ) {
            if(i ==0) ans[i][j] = 1;
            if(j ==0) ans[i][j] = ans[i - 1][1];
            if(i && j) ans[i][j] = ans[i - 1][j + 1] + ans[i][j - 1];
        }
    }
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n][0] << endl;
    }
    return 0;
}
