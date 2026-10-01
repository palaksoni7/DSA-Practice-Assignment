//Remove all negative numbers

#include <iostream>
using namespace std;

void removeNegative(int a[], int &n) {
    int j = 0;

    for (int i = 0; i < n; i++)
        if (a[i] >= 0)
            a[j++] = a[i];

    n = j;
}

int main() {
    int a[] = {10, -5, 20, -3, 40, -8};
    int n = 6;

    removeNegative(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}