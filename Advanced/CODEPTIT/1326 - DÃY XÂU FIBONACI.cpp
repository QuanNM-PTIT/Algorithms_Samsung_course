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

ll fibo[100] = {};
ll k;
int n;

ll findFibo(int n)
{
    if (n == 1 || n == 2) return 1;
    if (fibo[n]) return fibo[n];
    fibo[n] = findFibo(n - 1) + findFibo(n - 2);
    return fibo[n];
}

ll Try(ll k, int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3 && k == 1) return k;
    if (n == 3 && k == 2) return k;
    if (n == 4)
    {
        if (k & 1) return 2;
        else return 1;
    }
    if (k > fibo[n - 2]) return Try( k - fibo[n - 2], n - 1);
    else return Try(k, n - 2);
}

int main()
{
    faster();
    findFibo(92);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> k;
        ll l = Try(k, n);
        if (l == 1) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}
