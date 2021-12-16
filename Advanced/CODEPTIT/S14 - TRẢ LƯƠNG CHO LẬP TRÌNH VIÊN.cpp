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

int a[20202], b[20202], c[101010], t[101010];

int main()
{
    faster();
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int d = 0;
    FOR(i, 1, n)
    {
        cin >> a[i] >> b[i];
        c[++d] = a[i] - 1;
        c[++d] = a[i];
        c[++d] = b[i];
        c[++d] = b[i] + 1;
    }
    sort(c + 1, c + d + 1);
    d = unique(c + 1, c + d + 1) - c - 1;
    FOR(i, 1, n)
    {
        int pos_a = lower_bound(c + 1, c + d + 1, a[i]) - c - 1;
        int pos_b = lower_bound(c + 1, c + d + 1, b[i]) - c - 1;
        t[1] += x;
        t[pos_a] += y - x;
        t[pos_b + 1] += z - y;
    }
    int ans = 0;
    FOR(i, 2, d)
    {
        t[i] += t[i - 1];
        if(t[i] > ans) ans = t[i];
    }
    cout << ans;
    return 0;
}

