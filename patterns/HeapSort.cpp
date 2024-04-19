#include <bits/stdc++.h>
using namespace std;

void Heapify(vector<int>& arr, int n, int i) {
    int max = i;
    int left_ind = 2 * i + 1;
    int right_ind = 2 * i + 2;

    if (left_ind < n && arr[left_ind] > arr[max]) {
        max = left_ind;
    }
    if (right_ind < n && arr[right_ind] > arr[max]) {
        max = right_ind;
    }
    if (max != i) {
        swap(arr[max], arr[i]);
        Heapify(arr, n, max);
    }
}

vector<int> heapSort(vector<int>& arr, int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(arr, n, i);
    }

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        Heapify(arr, i, 0);
    }

    return arr;
}
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    arr = heapSort(arr, n);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
