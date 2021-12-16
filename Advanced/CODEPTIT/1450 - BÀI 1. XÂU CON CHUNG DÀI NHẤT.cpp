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
#define endl '\n'
 
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int dp[1001][1001] = {};
        F(i, 0, a.length()) // for(int i = 0; i < a.length(); ++i)
        {
            F(j, 0, b.length())
            {
                if(a[i] == b[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
                else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
        cout << dp[a.length()][b.length()] << endl;
    }
    return 0;
}
