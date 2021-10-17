#include <bits/stdc++.h>

using namespace std;

int n, ok=1;
int x[30];

void in() {
	for(int i = 1 ; i <= n ;i++) cout << x[i];
    cout << " ";
}

void binaryGen(){
	in();
	int i = n;
	while(x[i] == 1 && i <= n) --i;
    if(i == 0) {
        ok = 0;
        return;
    }
	x[i] = 1;
	for(int j = i+1; j <= n; ++j) x[j] = 0;
}

int main() {
	cin >> n;
    while(ok)
	    binaryGen();
}