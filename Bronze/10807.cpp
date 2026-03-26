#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> v;
    int temp;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    int findNum;
    cin >> findNum;

    int find = 0;

    for (int i = 0; i < N; i++) {
        if (findNum == v[i])
            find++;
    }
    cout << find << "\n";

    return 0;
}