//Rotate the array left by 1

#include <iostream>
using namespace std;

void rotateLeft(int a[], int n) {
    int first = a[0];

    for (int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = first;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;

    rotateLeft(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}