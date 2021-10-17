#include<bits/stdc++.h>
using namespace std;
int n, B[20];
void in(){
    for(int i=1;i<=n;i++) cout << B[i];
    cout << endl;
}
void Try(int i){
    int j;
    for(j = 0; j <= 1; j++){
        B[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}
main(){
    cin >> n;
    Try(1);
}
