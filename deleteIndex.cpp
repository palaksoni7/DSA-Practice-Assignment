//Delete the element at index 3 and shift left

#include <iostream>
using namespace std;

void deleteIndex(int a[], int &n, int index) {
    for (int i = index; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;

    deleteIndex(a, n, 3);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}