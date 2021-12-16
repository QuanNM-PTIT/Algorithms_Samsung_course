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
    string s;
    while(t--)
    {
        cin >> s;
        string tmp = s;
        int dp[45][45];
        reverse(tmp.begin(), tmp.end());
        FOR(i, 0, s.length())
        {
            FOR(j, 0, tmp.length())
            {
                if(i==0 || j==0) dp[1][j] = 0;
                else
                {
                    if(s[i - 1] == tmp[j - 1]) dp[1][j] = dp[0][j - 1] + 1;
                    else dp[1][j] = max(dp[0][j], dp[1][j - 1]);
                }
            }
            FOR(j, 0, s.length()) dp[0][j] = dp[1][j];
        }
        cout << s.length() - dp[1][s.length()] << endl;
    }
    return 0;
}
