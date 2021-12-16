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

bool ok(ll a, ll b)
{
    int cnt = 0;
    string s1 = to_string(a);
    string s2 = to_string(b);
    F(i, 0, s1.length())
    {
        while (s1[i] != s2[cnt] && cnt < s2.length()) ++cnt;
        if (i == s1.length() - 1 && cnt < s2.length() && s1[i] == s2[cnt]) return 1;
        ++cnt;
    }
    return 0;
}

int main()
{
    faster();
    vll v;
    FOR(i, 1, 100) v.pb(i * i * i);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s = to_string(n), tmp;
        bool check = 1;
        FORD(i, v.sz - 1, 0)
        {
            if(v[i] == n)
            {
                cout << n << endl;
                check = 0;
                break;
            }
            if(v[i] < n)
            {
                if(ok(v[i], n))
                {
                    cout << v[i] << endl;
                    check = 0;
                    break;
                }
            }
        }
        if(!check) continue;
        cout << -1 << endl;
    }
    return 0;
}
