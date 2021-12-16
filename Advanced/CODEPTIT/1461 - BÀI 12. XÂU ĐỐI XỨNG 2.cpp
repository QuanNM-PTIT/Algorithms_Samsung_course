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
    while(t--)
    {
        string s, x;
        cin >> s;
        int dp[101][101];
        x = s;
        reverse(x.begin(), x.end());
        int len = s.length();
        FOR(i, 0, len) dp[i][0] = i;
        FOR(i, 0, len) dp[0][i] = i;
        FOR(i, 1, len)
        {
            FOR(j, 1, len)
            {
                if(s[i - 1] == x[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
            }
        }
        cout << dp[len][len] / 2 << endl;
    }
    return 0;
}
