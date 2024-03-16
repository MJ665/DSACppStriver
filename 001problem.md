
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






Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.



Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘n’ to ‘1’ is [5, 4, 3, 2, 1].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
5 4 3 2 1
Explanation Of Sample Input 1:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘5’ to ‘1’ is [5, 4, 3, 2, 1].
Sample Input 2:
2
Sample Output 2:
2 1
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 2 1

Explanation: An array containing integers from ‘2’ to ‘1’ is [2, 1].
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Expected Space Complexity:
The expected space complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^4

Time Limit: 1-sec
C++ (g++ 5.4)
123456789101112131415
void printNum(vector<int>& ans, int x ,int c){
if (c==x){
    ans.push_back(c);
    return;
};
printNum(ans,x,c+1);
ans.push_back(c);
}
vector<int> printNos(int x) {
    // Write Your Code Here

Last saved at 3:35 PM


```cpp
void printNum(vector<int>& ans, int x ,int c){
if (c==x){
    ans.push_back(c);
    return;
};
printNum(ans,x,c+1);
ans.push_back(c);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    int c=1;
    printNum(ans, x, c);
    return ans;
}
```

