#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c) {
    if (n == 0) return;
    hanoi(n - 1, a, b, c);
    cout << "Move disk " << n << " from " << a << " to " << b << "\n";
    hanoi(n - 1, c, b, a);
    cout << "Move disk " << n << " from " << b << " to " << c << "\n";
    hanoi(n - 1, a, b, c);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
    return 0;
}
