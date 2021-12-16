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
    int t, n, x;
    long tmp1, sum;
    cin >> t;
    while(t--)
    {
        cin >> n;
        priority_queue<long, vector<long>, greater<long>> pq;
        while(n--)
        {
            cin >> x;
            pq.push(x);
        }
        sum = 0;
        while(pq.sz > 1)
        {
            tmp1 = pq.top();
            pq.pop();
            tmp1 += pq.top();
            pq.pop();
            pq.push(tmp1);
            sum += tmp1;
        }
        cout << sum << endl;
    }
    return 0;
}
