#include <bits/stdc++.h>

using namespace std;

int n, a[50];
void Clean() {
    for (int i = 0; i < 50; ++i)
        a[i] = 0;
}
void in(int m) {
    cout << "(";
    for (int i = 1; i < m; ++i) cout << a[i] << " ";
    cout << a[m] << ") ";
}

// i so luong phan tu, j phan tu lon nhat, s tong gia tri cua cac phan tu
void Try(int i, int j, int s) {
    int k;
    for (k = j; k >= 1; --k) {
        if(s + k <= n) {
            a[i] = k;
            s += k;
            if(s == n) {
                in(i);
            } else Try(i + 1, k, s);
            s -= k;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        Clean();
        Try(1, n, 0);
        cout << endl;
    }
}

