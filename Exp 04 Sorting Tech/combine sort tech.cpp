#include<iostream>
using namespace std;

// Merge function for Merge Sort
void merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {

    int choice;

    do {

        cout << "\n----- MENU -----" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Merge Sort" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice) {

            // Bubble Sort
            case 1:
            {
                int n;

                cout << "Enter number of elements : ";
                cin >> n;

                int arr[n];

                cout << "Enter elements : ";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                for(int j = 0; j < n - 1; j++) {
                    for(int i = 0; i < n - 1 - j; i++) {

                        if(arr[i] > arr[i + 1]) {
                            int t = arr[i];
                            arr[i] = arr[i + 1];
                            arr[i + 1] = t;
                        }
                    }
                }

                cout << "After Bubble Sort : ";
                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }

                cout << endl;
                break;
            }

            // Selection Sort
            case 2:
            {
                int n;

                cout << "Enter number of elements : ";
                cin >> n;

                int arr[n];

                cout << "Enter elements : ";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                for(int i = 0; i < n - 1; i++) {

                    int minIndex = i;

                    for(int j = i + 1; j < n; j++) {

                        if(arr[j] < arr[minIndex]) {
                            minIndex = j;
                        }
                    }

                    int t = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = t;
                }

                cout << "After Selection Sort : ";

                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }

                cout << endl;
                break;
            }

            // Insertion Sort
            case 3:
            {
                int n;

                cout << "Enter number of elements : ";
                cin >> n;

                int arr[n];

                cout << "Enter elements : ";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                for(int i = 1; i < n; i++) {

                    int key = arr[i];
                    int j = i - 1;

                    while(j >= 0 && arr[j] > key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }

                    arr[j + 1] = key;
                }

                cout << "After Insertion Sort : ";

                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }

                cout << endl;
                break;
            }

            // Merge Sort
            case 4:
            {
                int n;

                cout << "Enter number of elements : ";
                cin >> n;

                int arr[n];

                cout << "Enter elements : ";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                mergeSort(arr, 0, n - 1);

                cout << "After Merge Sort : ";

                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }

                cout << endl;
                break;
            }

            // Exit
            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}