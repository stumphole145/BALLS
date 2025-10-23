int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* sorted = sort(arr, n);
}
int* sort(int arr[], int n) {

    int min = findMin(arr, n, arr[0], 0);

    for (int x = 1; x < n; x++) {

        min = findMin(arr, n, min, )
    }
}

int findMin(int arr[], int n, int min, int minN) {
    for (int x = 0; x < n; x++)
        if ( (arr[x] < min && arr[x] != min) || (arr[x] == min && x == n) ) 
            min = arr[x];
    return min; 
}