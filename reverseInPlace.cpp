//Reverse the array in-place

#include <iostream>
using namespace std;

void reverseArray(int a[], int n) {
    int i = 0, j = n - 1;

    while (i < j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;

    reverseArray(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}