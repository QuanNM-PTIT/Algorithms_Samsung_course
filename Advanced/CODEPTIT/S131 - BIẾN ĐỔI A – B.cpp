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

int main()
{
    faster();
    string s;
    cin >> s;
    int A, B;
    A = B = 0;
    for(char i : s)
    {
        if(i == 'A')
        {
            if(A < B) B = A + 1;
            else ++B;
        }
        else
        {
            if(A < B) ++A;
            else A = B + 1;
        }
    }
    cout << A;
    return 0;
}
