#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> sortedArray = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 10;

    int index = binarySearch(sortedArray, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
