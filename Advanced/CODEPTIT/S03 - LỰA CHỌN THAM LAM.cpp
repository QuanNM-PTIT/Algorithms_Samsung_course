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

int m, s, nMin[105], nMax[105];

bool check()
{
    int x = s, n = 0;
    while(x > 9)
    {
        ++n;
        nMax[n] = 9;
        x -= 9;
        if(n > m) return 0;
    }
    if(n == m && x != 0) return 0;
    if(m - n == 1)
    {
        ++n;
        nMax[n] = x;
    }
    else
    {
        ++n;
        nMax[n] = x;
        while(n < m)
        {
            ++n;
            nMax[n] = 0;
        }
    }
    x = s;
    n = 0;
    while(x > 9)
    {
        ++n;
        nMin[n] = 9;
        x -= 9;
        if(n > m) return 0;
    }
    if(n == m && x) return 0;
    if(m - n == 1)
    {
        ++n;
        nMin[n] = x;
        if(!x) swap(nMin[n], nMin[n - 1]);
    }
    else
    {
        if(!x)
        {
            FOR(i, n, m - 1) nMin[i] = 0;
            nMin[m] = 9;
        }
        else
        {
            nMin[n + 1] = x - 1;
            FOR(i, n + 2, m - 1) nMin[i] = 0;
            nMin[m] = 1;
        }
    }
    return 1;
}

int main()
{
    faster();
    cin>>m>>s;
    if (m!=1 && s==0)
    {
        cout<<"-1 -1";
        return 0;
    }
    if (!check()) cout <<"-1 -1";
    else
    {
        FORD(i, m, 1) cout << nMin[i];
        cout << " ";
        FOR(i, 1, m) cout << nMax[i];
    }
    return 0;
}
