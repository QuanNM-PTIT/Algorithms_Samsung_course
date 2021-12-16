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

const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;

int main()
{
    faster();
    int f[N][K];
    f[0][0] = 1;
    FOR(i, 1, N - 1) f[i][0] = 0;
    FOR(j, 1, K - 1)
    {
        int ans = 1;
        f[0][j] = 1;
        F(i, 1, j)
        {
            f[i][j] = ans;
            ans = (ans + f[i][j]) % M;
        }
        F(i, j, N)
        {
            f[i][j] = ans;
            ans = (ans - f[i - j][j] + M) % M;
            ans = (ans + f[i][j]) % M;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
    return 0;
}
