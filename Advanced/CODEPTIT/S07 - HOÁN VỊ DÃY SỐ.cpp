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

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    sort(a, a + n);
    for(int i : a) cout << i << ' ';
    cout << endl;
    while(next_permutation(a, a + n))
    {
        for(int i : a) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
