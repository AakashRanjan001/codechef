#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int A[N];
        int B[N];
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        bool array = false;
        A[0] = 0;
        for (int i = 0; i < N - 1; i++) {
            A[i + 1] = (B[i] + A[i]) % 2;
        }
        int check = (A[0] + A[N - 1]) % 2;
        if (check == B[N - 1]) {
            array = true;
        }
        A[0] = 1;
        for (int i = 0; i < N - 1; i++) {
            A[i + 1] = (B[i] + A[i]) % 2;
        }
        if (check == B[N - 1]) {
            array = true;
        }
        if (array) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
