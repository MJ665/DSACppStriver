#include <iostream>
#include <vector>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            };
			for (int k =0;k<n;k++){
				cout<<arr[k]<< " ";
			};cout<<endl;
						for (int k =0;k<n;k++){
				cout<<visited[k]<< " ";
			};cout<<endl;
        }
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {2,2,4,5,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
