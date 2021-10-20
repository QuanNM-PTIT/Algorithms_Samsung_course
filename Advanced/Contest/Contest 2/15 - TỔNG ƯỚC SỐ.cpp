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

int a[1000005];
bool dd[1000010] = {};

bool check(int n)
{
    if(n == 1 || !dd[n]) return 0;
    double sqr = sqrt(n);
    int pre = n;
    int cnt = 0;
    ll res = 1;
    FOR(i, 2, sqr)
    {
        if(n % i == 0)
        {
            cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            sqr = sqrt(n);
            ll next = i;
            ll tmp = 1;
            FOR(j, 1, cnt)
            {
                tmp += next;
                next *= i;
            }
            res *= tmp;
        }
        if(!dd[n]) break;
    }
    if(n > 1) res *= (n + 1);
    res -= pre;
    return res > pre;
}

int main()
{
    faster();
    int l, r, cnt = 0;
    cin >> l >> r;
    double sqr = sqrt(r);
    dd[0] = dd[1] = 1;
    FOR(i, 2, sqr) if(!dd[i]) for(int j = i * i; j <= r; j += i) dd[j] = 1;
    FOR(i, l, r) if(check(i)) ++cnt;
    cout << cnt;
    return 0;
}
