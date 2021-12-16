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

int lcs(string &a)
{
    int res = 1;
    int len = a.length();
    int l, r;
    F(i, 1, len)
    {
        l = i - 1;
        r = i;
        while(l >= 0 && r < len && a[l] == a[r])
        {
            --l;
            ++r;
        }
        ++l;
        --r;
        if(a[l] == a[r] && r - l + 1 > res) res = r - l + 1;
        l = i - 1;
        r = i + 1;
        while(l >= 0 && r < len && a[l] == a[r])
        {
            --l;
            ++r;
        }
        ++l;
        --r;
        if(a[l] == a[r] && r - l + 1 > res) res = r - l + 1;
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        cout << lcs(a) << endl;
    }
    return 0;
}
