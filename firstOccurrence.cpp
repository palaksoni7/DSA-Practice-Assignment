//Find the first occurrence of X

#include <iostream>
using namespace std;

int firstOccurrence(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 20, 40};
    int n = 5, x = 20;

    cout << "First occurrence of " << x << " = index "
         << firstOccurrence(a, n, x);

    return 0;
}