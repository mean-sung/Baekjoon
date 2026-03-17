#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    int A, B;

    cin >> count;

    while (count != 0) {
        cin >> A >> B;
        cout << A + B << "\n";

        count--;
    }

    return 0;
}