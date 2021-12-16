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
int cnt(int n)
{
    vi v;
    int i = 1;
    double sqr = sqrt(n);
    while(i <= sqr)
    {
        v.pb(i * i);
        ++i;
    }
    vi dp(n + 1, INT_MAX);
    dp[n] = 0;
    FORD(i, n - 1, 0)
    {
        for(int j : v) if(i + j <= n) dp[i] = min(dp[i], dp[i + j]);
        ++dp[i];
    }
    return dp[0];
}

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << cnt(n) << endl;
    }
    return 0;
}
