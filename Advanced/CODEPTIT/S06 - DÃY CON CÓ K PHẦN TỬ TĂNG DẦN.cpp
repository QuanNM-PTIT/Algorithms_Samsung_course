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

int n, k;
int a[20], x[20];
bool f[20] = {};

void print()
{
    FOR(i, 1, k) cout << x[i] << ' ';
    cout << endl;
}

void Try(int i, int cnt = 1)
{
    FOR(j, i, n)
    {
        if(!f[j])
        {
            f[j] = 1;
            x[cnt] = a[j];
            if(cnt == k) print();
            else Try(j + 1, cnt + 1);
            f[j] = 0;
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n);
        Try(1);
    }
    return 0;
}
