//Print every index where X occurs

#include <iostream>
using namespace std;

void allIndices(int a[], int n, int x) {
    cout << "Indices: ";

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            cout << i << " ";
    }
}

int main() {
    int a[] = {10, 20, 30, 20, 40, 20};
    int n = 6, x = 20;

    allIndices(a, n, x);

    return 0;
}