#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    vector<int> fib(n + 1);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
