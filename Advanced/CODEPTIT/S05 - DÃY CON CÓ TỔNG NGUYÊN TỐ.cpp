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

int x[20] = {}, a[20];
vector<string> vs;
int n;
int b[1460];
bool f[1465] = {};

void in()
{
    int sum = 0;
    FOR(i, 1, n) if(x[i]) sum += a[i];
    if(!f[sum])
    {
        FOR(i, 1, n) if(x[i]) cout << a[i] << " ";
        cout << endl;
    }
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        x[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}

int main()
{
    faster();
    f[0] = f[1] = 1;
    double sqr = sqrt(1460);
    FOR(i, 2, sqr) if(!f[i]) for(int j = i * i; j <= 1460; j += i) f[j] = 1;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n, greater<int>());
        Try(1);
    }
    return 0;
}
