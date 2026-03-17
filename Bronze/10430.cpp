#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;  // 5, 8, 4
    cin >> A >> B >> C;

    cout << (A + B) % C << "\n";              // 1
    cout << ((A % C) + (B % C)) % C << "\n";  // 1
    cout << (A * B) % C << "\n";              // 0
    cout << ((A % C) * (B % C)) % C << "\n";  // 0

    return 0;
}