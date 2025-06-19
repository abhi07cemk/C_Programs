#include <stdio.h>

int linearSearch(int* arr, int n, int key) {
for (int i = 0; i < n; i++) {
if (arr[i] == key) {
return i;
}
}
return -1;
}

int main() {
int arr[100], n, key, index;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("Enter the element to search: ");
scanf("%d", &key);

index = linearSearch(arr, n, key);

if (index == -1)
printf("Key Not Found\n");
else
printf("Key Found at Index: %d\n", index);

return 0;
}