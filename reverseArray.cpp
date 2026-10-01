//Reverse the array using another array

#include <iostream>
using namespace std;

void reverseArray(int a[], int n) {
    int b[n];

    for (int i = 0; i < n; i++)
        b[i] = a[n - 1 - i];

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
}

int main() {
    int a[] = {10, 20, 30, 40, 50};

    reverseArray(a, 5);

    return 0;
}