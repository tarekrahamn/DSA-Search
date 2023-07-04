#include <stdio.h>

int main() {
    int arr[100];
    int n, key;
    scanf("%d%d", &n,&key);
    //scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int foundIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex ++;
            break;
        }
      
    }
    if (foundIndex !=0) {
        printf("Element %d found \n", key);
    }else{
        printf("Element not found\n");
    }

    return 0;
}
