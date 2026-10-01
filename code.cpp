#include <iostream>
#include <algorithm>
int main() {
    int arr[] = {10, 25, 7, 45, 30, 15, 5, 20, 40, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n);
    std::cout << "The largest number is: " << arr[n - 1] << std::endl;
    return 0;
}