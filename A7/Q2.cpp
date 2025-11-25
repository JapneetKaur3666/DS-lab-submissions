#include <iostream>
using namespace std;

void improvedSelectionSort(int* arr, int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int minIndex = left;
        int maxIndex = left;

        // Find min and max in current range
        for (int i = left; i <= right; i++) {
            if (arr[i] < arr[minIndex])
                minIndex = i;
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
        swap(arr[left], arr[minIndex]);
        // If maxIndex was pointing to left, now it points to minIndex after swapping
        if (maxIndex == left)
            maxIndex = minIndex;
        swap(arr[right], arr[maxIndex]);
        left++;
        right--;
    }

    cout << "\nSorted array using improved selection sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
