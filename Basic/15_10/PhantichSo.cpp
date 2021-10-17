#include<bits/stdc++.h>
using namespace std;
int n, a[50];
void in(int m){
    for(int i=1; i<=m; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i, int j, int s){
    int k;
    for(k = j; k >= 1; k--){
        if(s + k <= n){
            a[i] = k;
            s = s + k;
            if(s == n) in(i);
            else Try(i+1, k, s);
            s = s - k;
        }
    }
}
main(){
    cin >> n;
    Try(1, n, 0);
}
