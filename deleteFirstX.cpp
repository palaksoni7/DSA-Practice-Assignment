//Search for X and delete it.Delete the first occurrence of X.

#include <iostream>
using namespace std;

void deleteFirst(int a[], int &n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];

            n--;
            return;
        }
    }
}

int main() {
    int a[] = {10, 20, 30, 20, 40};
    int n = 5, x = 20;

    deleteFirst(a, n, x);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}