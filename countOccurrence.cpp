//Count how many times X occurs

#include <iostream>
using namespace std;

int countOccurrence(int a[], int n, int x) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            count++;
    }

    return count;
}

int main() {
    int a[] = {10, 20, 30, 20, 40, 20};
    int n = 6, x = 20;

    cout << x << " occurs " << countOccurrence(a, n, x) << " times";

    return 0;
}