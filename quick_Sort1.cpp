void solve(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int pivotValue = arr[start];
    int cnt = 0;

    // Count how many elements are less than pivot
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < pivotValue) cnt++;
    }

    // Place pivot at its correct position
    int pivotIndex = start + cnt;
    swap(arr[start], arr[pivotIndex]);

    // Rearranging elements around pivot
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        if (arr[i] < pivotValue) {
            i++;
        } else if (arr[j] >= pivotValue) {
            j--;
        } else {
            swap(arr[i++], arr[j--]);
        }
    }

    // Recurse on left and right parts
    solve(arr, start, pivotIndex - 1);
    solve(arr, pivotIndex + 1, end);
}

vector<int> quickSort(vector<int> arr) {
    solve(arr, 0, arr.size() - 1);
    return arr;
}
