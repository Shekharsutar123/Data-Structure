#include <iostream>
using namespace std;

int main() {
    int arr[20], n, i;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1. Traversal
    cout << "\nArray elements: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Insertion
    int p, value;

    cout << "\nEnter position for insertion: ";
    cin >> p;

    cout << "Enter value to insert: ";
    cin >> value;

    for (i = n; i > p; i--) {
        arr[i] = arr[i - 1];
    }

    arr[p] = value;
    n++;

    cout << "After insertion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Deletion
    cout << "\nEnter position for deletion: ";
    cin >> p;

    for (i = p; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "After deletion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Searching
    int a, found = 0;

    cout << "\nEnter element to search: ";
    cin >> a;

    for (i = 0; i < n; i++) {
        if (arr[i] == a) {
            cout << "Element " << a << " found at index " << i << endl;
            found = 1;
        }
    }

    if (found == 0) {
        cout << "Element not found" << endl;
    }

    // 5. Updation
    cout << "\nEnter position to update: ";
    cin >> p;

    cout << "Enter new value: ";
    cin >> value;

    arr[p] = value;

    cout << "After updation: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}