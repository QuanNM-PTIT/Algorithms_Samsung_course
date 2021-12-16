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

ll n, m;

struct data
{
    ll w = 0, v = 0;
};

void solve(data a[], ll dp[1005][1005], ll &res)
{
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            if(j < a[i].w) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i].w] + a[i].v);
            res = max(res, dp[i][j]);
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        data a[1005];
        ll dp[1005][1005];
        ll res = 0;
        cin >> n >> m;
        FOR(i, 1, n) cin >> a[i].w;
        FOR(i, 1, n) cin >> a[i].v;
        solve(a, dp, res);
        cout << res << endl;
    }
    return 0;
}
