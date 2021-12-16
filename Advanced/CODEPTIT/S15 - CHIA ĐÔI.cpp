// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    ll ans[35][35];
    ans[0][0] = 0;
    ans[0][1] = 1;
    ans[1][0] = 1;
    FOR(i, 0, 30)
    {
        FOR(j, 0, 30)
        {
            if(!i) ans[i][j] = 1;
            if(!j) ans[i][j] = ans[i - 1][1];
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
