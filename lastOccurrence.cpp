//Find the last occurrence of X

#include <iostream>
using namespace std;

int lastOccurrence(int a[], int n, int x) {
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            index = i;
    }

    return index;
}

int main() {
    int a[] = {10, 20, 30, 20, 40};
    int n = 5, x = 20;

    cout << "Last occurrence of " << x << " = index "
         << lastOccurrence(a, n, x);

    return 0;
}