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

int giaiThua(int n)
{
    int res = 1;
    FOR(i, 2, n) res *= i;
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        vi v(n);
        F(i, 0, n) v[i] = n - i;
        int cnt = giaiThua(n) - 1;
        F(i, 0, n) printf("%d", v[i]);
        printf(" ");
        while(cnt--)
        {
            prev_permutation(v.begin(), v.end());
            F(i, 0, n) printf("%d", v[i]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
