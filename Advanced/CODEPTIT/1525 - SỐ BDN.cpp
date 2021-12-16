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

int modulo(string s, int n)
{
    int tmp = 0;
    for(char i : s)
    {
        tmp = tmp * 10 + i - '0';
        tmp %= n;
    }
    return tmp;
}

string find(int n)
{
    queue<string> q;
    unordered_map<int, bool> um;
    q.push("1");
    string top;
    int mod;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        mod = modulo(top, n);
        if(!mod) return top;
        if(!um[mod])
        {
            um[mod] = 1;
            q.push(top + "0");
            q.push(top + "1");
        }
    }
    return top;
}

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << find(n) << endl;
    }
    return 0;
}
