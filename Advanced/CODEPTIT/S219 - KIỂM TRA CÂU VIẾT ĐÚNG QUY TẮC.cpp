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

bool solve(string &s)
{
    stack<char> st;
    for(char i : s)
    {
        if(i == '(' or i == '[') st.push(i);
        else if(i == ')' or i == ']')
        {
            if(i == ')' and !st.empty() and st.top() == '(') st.pop();
            else if(i == ']' and !st.empty() and st.top() == '[') st.pop();
            else return 0;
        }
    }
    return st.empty();
}
 
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        if(solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
//([)]
