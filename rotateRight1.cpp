//Rotate the array right by 1

#include <iostream>
using namespace std;

void rotateRight(int a[], int n) {
    int last = a[n - 1];

    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = last;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;

    rotateRight(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}