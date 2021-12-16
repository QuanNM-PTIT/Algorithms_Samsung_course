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

int solve(string &s)
{
    int MAX = -1, cnt = 0;
    stack<char> st;
    for(char i : s)
    {
        if(i == ')')
        {
            if(st.empty()) return -1;
            st.pop();
        }
        else if(i == '(')
        {
            st.push(i);
            MAX = max(MAX, (int) st.sz);
        }
    }
    if(!st.empty()) return -1;
    return MAX;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
