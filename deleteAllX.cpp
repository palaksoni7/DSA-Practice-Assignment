//Delete all occurrences of X

#include <iostream>
using namespace std;

void deleteAll(int a[], int &n, int x) {
    int j = 0;

    for (int i = 0; i < n; i++)
        if (a[i] != x)
            a[j++] = a[i];

    n = j;
}

int main() {
    int a[] = {10, 20, 30, 20, 40, 20};
    int n = 6, x = 20;

    deleteAll(a, n, x);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}