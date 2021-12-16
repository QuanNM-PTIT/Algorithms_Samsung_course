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

ll n, s, k = 3;
ll a[105];
ll MAX = INT_MIN;

void Try(int i, int cnt = 0, ll sum = 0)
{
    if(cnt == k)
    {
        if(sum <= s) MAX = max(MAX, sum);
        return;
    }
    else FOR(j, i, n) if(sum + a[j] <= s) Try(j + 1, cnt + 1, sum + a[j]);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        FOR(i, 1, n) cin >> a[i];
        Try(1);
        cout << MAX << endl;
    }
    return 0;
}
