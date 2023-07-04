#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = (left + right)  / 2;

        if (arr[mid] == key) {
            return mid;  // Return the index of the found element
        } else if (arr[mid] < key) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[100];
    int n, key;
    scanf("%d%d", &n, &key);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
     printf("\n");
    int foundIndex = binarySearch(arr, 0, n - 1, key);

    if (foundIndex != -1) {
        printf("Element %d found at index %d\n", key, foundIndex);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
/*
Binaray Search Problem 
https://codeforces.com/contest/1676/problem/E

void run(){
    ll n, Q;
    cin >> n >> Q;
    vll v(n);
    FOR(i,0,n){
        cin >> v[i];
    }
    sort(all(v));
    reverse(all(v));
   // int sum = 0;
    // FOR(i,0,n) {
    //     sum += v[i];
    //     p[i] = sum;
    // }
    FOR(i,1,n) {
        v[i] += v[i - 1];
    }
    while(Q--){
        ll key;
        cin >> key;
        ll len = 0,range =n-1;
        ll ans =-1;
        while (len <= range) {
            ll mid = (len + range) / 2;
            if (v[mid] >= key) {
                ans = mid+1 ;
                range = mid - 1;
            } else {
                len = mid + 1;
            }
        }
         cout << ans << nl;
    }
}
int main(){
    Tarek
    test{
        run();
    }
    checkmate;
}

*/