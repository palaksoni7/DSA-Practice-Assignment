//Rotate the array left by K positions

#include <iostream>
using namespace std;

void reverse(int a[], int l, int r) {
    while (l < r)
        swap(a[l++], a[r--]);
}

void rotateLeft(int a[], int n, int k) {
    k %= n;

    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);
    reverse(a, 0, n - 1);
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, k = 2;

    rotateLeft(a, n, k);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}