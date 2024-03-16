
Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



Example:
Input: ‘n’ = 5

Output: 1 2 3 4 5

Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
The array contains all integers from 1 to 5 in ascending order.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
The array contains all integers from 1 to 2 in ascending order.
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^6

Time Limit: 1-sec


Hints:
Can we optimize the space complexity of recursive calls?
C++ (g++ 5.4)
12345678910111213141516
void print_num(vector<int>&ans, int x){
    if(x==1){
        ans.push_back(x); return;
    }
    print_num(ans,x-1);
    ans.push_back(x);
}


vector<int> printNos(int x) {


```cpp


void print_num(vector<int>&ans, int x){
    if(x==1){
        ans.push_back(x); return;
    }
    print_num(ans,x-1);
    ans.push_back(x);
}


vector<int> printNos(int x) {
    // Write Your Code Here
vector<int> ans;
print_num(ans,x);
return ans;
}



```






Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



Example:
Input: ‘n’ = 5

Output: 1 2 3 4 5

Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
The array contains all integers from 1 to 5 in ascending order.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
The array contains all integers from 1 to 2 in ascending order.
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^6

Time Limit: 1-sec

``` cpp
Hints:
Can we optimize the space complexity of recursive calls?
C++ (g++ 5.4)
12345678910111213141516
void print_num(vector<int>&ans, int x){
    if(x==1){
        ans.push_back(x); return;
    }
    print_num(ans,x-1);
    ans.push_back(x);
}


vector<int> printNos(int x) {

//Ans:
void print_num(vector<int>&ans, int x){
    if(x==1){
        ans.push_back(x); return;
    }
    print_num(ans,x-1);
    ans.push_back(x);
}


vector<int> printNos(int x) {
    // Write Your Code Here
vector<int> ans;
print_num(ans,x);
return ans;
}


```



