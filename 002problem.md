# Selection Sort

Problem statement
Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.



 Note:
Change in the input array/list itself. 


Example:
Input:
N = 5
arr = {8, 6, 2, 5, 1}

Output:
1 2 5 6 8 
Explanation: 

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6
2 13 4 1 3 6 
Sample Output 1:
1 2 3 4 6 13 
Explanation Of Sample Input 1:
 Select 1 and swap with element at index 0. arr= {1,13,4,2,3,6}

 Select 2 and swap with element at index 1. arr= {1,2,4,13,3,6}

 Select 3 and swap with element at index 2. arr= {1,2,3,13,4,6}

 Select 4 and swap with element at index 3. arr= {1,2,3,4,13,6}

 Select 6 and swap with element at index 4. arr= {1,2,3,4,6,13}
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec


```cpp
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void selectionSort(vector<int>& arr) {
    selection_sort(arr, arr.size());
}
```





Problem statement
You are given an integer array 'arr' of size 'N'.



You must sort this array using 'Bubble Sort'.



Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying bubble sort on the input array, the output is [0 2 3 6 9].
Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^9
Time Limit: 1 sec

```cpp
#include <vector>

using namespace std;

void myBubbleSort(vector<int>& arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSort(vector<int>& arr, int n) {
    myBubbleSort(arr, n);
    // No need to return anything in a void function
}

```


Problem statement
You are given an integer array 'arr' of size 'N'.



You must sort this array using 'Insertion Sort' recursively.



 Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying insertion sort on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
9 3 6 2 0
Sample Output 1:
0 2 3 6 9
Sample Input 2:
4
4 3 2 1
Sample Output 2:
1 2 3 4 
Constraints :
0 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec

```cpp
void myInsertionSort(int arr[], int n){
for(int i =0 ;i<= n-1;i++){
    for (int j=i; j>0 && arr[j-1]>arr[j] ; j--){
        int temp = arr[j-1];
         arr [ j-1] = arr[j];
         arr[j]= temp;
    }

}
}

void insertionSort(int arr[], int n)
{
    //write your code here

    myInsertionSort(arr,n);
}
```





# Recursive Bubble Sort
Bubble Sort
Easy
40/40
Average time to solve is 15m
124 upvotes
Asked in company
Problem statement
You are given an integer array 'arr' of size 'N'.



You must sort this array using 'Bubble Sort'.



Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying bubble sort on the input array, the output is [0 2 3 6 9].
Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^9
Time Limit: 1 sec
```cpp
#include <vector>

using namespace std;

void myBubbleSort(vector<int>& arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void myRecurBubbleSort(vector<int>& arr,int n){
    if ( n == 1){return;};
 

    for (int j = 0 ; j<= n-2 ; j++){
        if (arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1]=arr[j];
            arr [ j ] = temp;
                    }
    };
    myRecurBubbleSort(arr, n-1);
}

void bubbleSort(vector<int>& arr, int n) {
    // myBubbleSort(arr, n);
    // No need to return anything in a void function

    myRecurBubbleSort(arr, n);
}
```

# Recursive Insertion Sort

Problem statement
You are given an integer array 'arr' of size 'N'.



You must sort this array using 'Insertion Sort' recursively.



 Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying insertion sort on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
9 3 6 2 0
Sample Output 1:
0 2 3 6 9
Sample Input 2:
4
4 3 2 1
Sample Output 2:
1 2 3 4 
Constraints :
0 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec

```cpp
void myInsertionSort(int arr[], int n){
for(int i =0 ;i<= n-1;i++){
    for (int j=i; j>0 && arr[j-1]>arr[j] ; j--){
        int temp = arr[j-1];
         arr [ j-1] = arr[j];
         arr[j]= temp;
    }

}
}

void myRecurInsertionSort(int arr[], int i, int n) {
    if (i == n) {
        return;
    }
    for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
    }
    myRecurInsertionSort(arr, i + 1, n); 
}

void insertionSort(int arr[], int n) {
    myRecurInsertionSort(arr, 0, n);
}

```



# Merge Sort


Problem statement
You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.



You must sort the elements between 'l' and 'r'.



Note:
Change in the input array itself. So no need to return or print anything.
Example:
Input: ‘N’ = 7,
'ARR' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying 'merge sort' on the input array, the output is [0 2 3 6 9].
Constraints :
1 <= N <= 10^3
0 <= ARR[i] <= 10^9

```cpp
#include <vector>

void merge(int arr[], int low, int mid, int high) {
    std::vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void myMergeSort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    myMergeSort(arr, low, mid);
    myMergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(std::vector<int>& arr, int l, int r) {
    int n = arr.size();
    int* plainArray = &arr[0]; // Get a pointer to the first element of the vector
    myMergeSort(plainArray, l, r);
}
```




# quick Sort

Problem statement
Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.



Note :
Make changes in the input array itself.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 2 3 5 7
Sample Output 2 :
1 2 3 5 7 
Constraints :
1 <= N <= 10^3
0 <= input[i] <= 10^9


```cpp
#include <algorithm> // for std::swap

int partitionArray(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (i < high && arr[i] <= pivot) {
            i++;
        }
        while (j > low && arr[j] >= pivot) {
            j--;
        }
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[j], arr[low]);
    return j;
}

void myQuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pIndex = partitionArray(arr, low, high);
        myQuickSort(arr, low, pIndex);
        myQuickSort(arr, pIndex + 1, high);
    }
}

void quickSort(int input[], int start, int end) {
    myQuickSort(input, start, end);
}
```