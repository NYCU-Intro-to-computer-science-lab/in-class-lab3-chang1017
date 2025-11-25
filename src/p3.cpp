#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int a = 2; a <= n / 2; a++) {
        int b = n - a;
        if (isPrime(a) && isPrime(b)) {
            cout << a << " " << b;
            break;
        }
    }

    return 0;
}
