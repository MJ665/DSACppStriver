Problem statement
Given an array ‘arr’ of size ‘n’ find the largest element in the array.



Example:

Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: 5

Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample input 1:
6
4 7 8 6 7 6 
Sample output 1:
8
Explanation of sample input 1:
The answer is 8.
From {4 7 8 6 7 6}, 8 is the largest element.
Sample input 2:
8
5 9 3 4 8 4 3 10 
Sample output 2:
10
Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘arr’.
Constraints :
1 <= 'n' <= 10^5
1 <= 'arr[i]' <= 10^9

Time Limit: 1 sec



this solution was not accepted beacouse less
 optimal soluition error

```cpp
#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

void quickSort(vector<int> &arr, int low, int high) {
    qs(arr, low, high);
}

int largestElement(vector<int> &arr, int n) {
    quickSort(arr, 0, n - 1);
    return arr[n - 1];
}

int main() {
    vector<int> arr = {3, 6, 8, 10, 1, 2, 1};
    int n = arr.size();
    cout << "Largest Element: " << largestElement(arr, n) << endl;
    return 0;
}
```


&& MORE optimal solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int maxElement = INT_MIN; // Initialize maxElement with the smallest possible integer value
    for (int i = 0; i < n; ++i) {
        maxElement = max(maxElement, arr[i]); // Update maxElement if the current element is larger
    }
    return maxElement;
}

```



