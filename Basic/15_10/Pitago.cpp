#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], int n){
    int i, l, r;
    for (i=0; i<n; i++) a[i] = a[i] * a[i];
    sort(a, a + n);
    for(i = n-1; i >= 2; i--){
        l = 0; r = i-1;
        while (l < r){
            if (a[l] + a[r] == a[i]) return true;
            if(a[l] + a[r] < a[i])  l++;
            else r--;
        }
    }
    return false;
}

main(){
    long long a[100005]; int t, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) cin >> a[i];
        if(check(a, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
