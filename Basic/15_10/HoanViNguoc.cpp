#include<bits/stdc++.h>
using namespace std;
int n, A[12], B[12];
void in(){
    for(int i = 1; i <= n; i++)
        cout << A[i];
    cout << " ";
}
void Try(int i){
    int j;
    for(j = n; j >= 1; j--){
        if(B[j] == 0){
            A[i] = j;
            B[j] = 1;
            if(i == n) in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }

}
