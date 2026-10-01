//Take position from the user and delete that element

#include <iostream>
using namespace std;

void deletePosition(int a[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, pos;

    cout << "Enter position: ";
    cin >> pos;

    deletePosition(a, n, pos);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}