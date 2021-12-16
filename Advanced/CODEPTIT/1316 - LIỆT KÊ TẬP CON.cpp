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

char x[20];
string s;
int n, k;
bool f[20];

void print(int i)
{
    string tmp = "";
    FOR(j, 0, i) tmp += x[j];
    cout << tmp << ' ';
}

void Try(int i, int cnt = 0)
{
    for(int j = i; j < n; ++j)
    {
        x[cnt] = s[j];
        if(!f[j])
        {
            f[j] = 1;
            print(cnt);
            Try(j + 1, cnt + 1);
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
        memset(f, 0, 20);
        cin >> n;
        cin >> s;
        Try(0);
        cout << endl;
    }
    return 0;
}
