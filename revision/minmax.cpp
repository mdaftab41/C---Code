#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (maxi < arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
   
    int arr[6] = {5, 6, 7, 45, 3, 8};
    printArr(arr, 6);
    int maxiElement = getMax(arr, 6);
    cout << "Maxi Element is: " << maxiElement << endl;

    return 0;
}
