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

string s;
ll k, b, m, x, c = 1;

ll cvt(int i)
{
    return (x * b + (s[i] - '0')) % m;
}

int main()
{
    faster();
    stack<ll> st;
    cin >> s;
    cin >> k >> b >> m;
    x = cvt(0);
    F(i, 1, k)
    {
        c = (c * b) % m;
        x = cvt(i);
    }
    st.push(x);
    int tmp = s.sz - k + 1;
    F(i, 1, tmp)
    {
        x = st.top();
        x -= (c * (s[i - 1] - '0')) % m;
        if(x < 0) x += m;
        x = cvt(i + k - 1);
        st.push(x);
    }
    ll ans = 0;
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}
