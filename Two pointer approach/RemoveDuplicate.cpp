int removeDuplicates(vector<int> &arr, int n) {
    if (n == 0 || n == 1) // If the array is empty or has only one element, no duplicates to remove
        return n;

    int j = 0; 
    // Traverse the array and compare elements with the next element
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) { // If the current element is not equal to the next one
            arr[j++] = arr[i]; // Move the current element to the next unique position
        }
    }
  arr[j++] = arr[n - 1];
  return j;
}
