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
    int s, n;
    cin >> s >> n;
    int a[n + 1];
    FOR(i, 1, n) cin >> a[i];
    vector<vi> l(n + 1, vi(s + 1, 0));
    FOR(i, 1, n)
    {
        FOR(j, 1, s)
        {
            if(a[i]<=j) l[i][j]=max(l[i-1][j-a[i]]+a[i],l[i-1][j]);
            else l[i][j]=l[i-1][j];
        }
    }
    cout<<l[n][s];
    return 0;
}
