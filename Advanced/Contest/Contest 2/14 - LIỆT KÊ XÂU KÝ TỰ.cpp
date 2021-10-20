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
char c;
char x[20];

void print()
{
    FOR(i, 1, k) cout << x[i];
    cout << endl;
}

void Try(int i, int cnt = 1)
{
    FOR(j, i, n)
    {
        x[cnt] = j + 'A' - 1;
        if(cnt == k) print();
        else Try(j, cnt + 1);
    }
}

int main()
{
    faster();
    cin >> c >> k;
    n = c - 'A' + 1;
    Try(1);
    return 0;
}
