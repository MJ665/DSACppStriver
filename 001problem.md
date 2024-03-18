
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

Problem statement
You are given an integer ‘n’.



Your task is determining the sum of the first ‘n’ natural numbers and returning it.



Example:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3
Sample Output 1 :
6
Explanation Of Sample Input 1:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
Sample Input 2:
5
Sample Output 2:
15
Explanation of sample output 2:
Input: ‘n’ = 5

Output: 15

Explanation: The sum of the first 5 natural numbers is 1 + 2 + 3 + 4 + 5, equal to 15.
Expected Time Complexity:
The expected time complexity is O(1).
Expected Space Complexity:
The expected space complexity is O(1).
Constraints:
1 <= n <= 10^9
Time Limit: 1 sec

```cpp

long long sumFirstN(long long n) {
  
    // Write your code here.
  if (n==0) {return};
  return n+sumFirstN(n-1);
}```



Problem statement
You are given an integer ’n’.



Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.



The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.



Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
Sample Output 1 :
1 2 6
Explanation Of Sample Input 1:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 1 2

Explanation: Factorial numbers less than or equal to ‘2’ are ‘1’ and ‘2’.
Expected Time Complexity:
The expected time complexity is O(m), where ‘m’ is the number of factorial numbers which are less than or equal to ‘n’.
Expected Space Complexity:
The expected space complexity is O(m), where ‘m’ is the number of factorial numbers which are less than or equal to ‘n’.
Constraints:
1 <= n <= 10^18

Time Limit: 1-sec
```cpp
void addNum( vector<long long>& ans ,long long  a,long long b, long long n){
 if ( a>n){
     return ;
 };
 ans.push_back(a);
 a=a*b;
 b=b+1;
 addNum(ans,a,b,n);
   

}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
   vector<long long> ans;
long long a = 1;
long long b = 2;

   addNum ( ans,a,b,n);
   return ans;
}
```


Problem statement
Given an array 'arr' of size 'n'.



Return an array with all the elements placed in reverse order.



Note:
You don’t need to print anything. Just implement the given function.
Example:
Input: n = 6, arr = [5, 7, 8, 1, 6, 3]

Output: [3, 6, 1, 8, 7, 5]

Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
3 1 1 7 4 2 6 11
Sample Output 1:
11 6 2 4 7 1 1 3    
Explanation Of Sample Input 1 :
After reversing the array, it looks like this [11, 6, 2, 4, 7, 1, 1, 3].
Sample Input 2:
4
8 1 3 2
Sample Output 2:
2 3 1 8
Explanation Of Sample Input 2 :
After reversing the array, it looks like this [2, 3, 1, 8].
Expected time complexity
The expected time complexity is O(n).
Constraints:
1 <= 'n' <= 10^6
-10^9 <= 'arr[i]' <=10^9

```cpp

void reverse (int n , int i , vector<int > & ans){
if (i>=n/2){
    return;
};
swap(ans[i],ans[n-1-i]);

reverse(n,i+1,ans);

}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int i = 0;

reverse(n,i,nums);
return nums;
}
```



Problem statement
Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.

Note: You are not required to print anything, just implement the function. Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
abbba
Sample Output 1:
true
Explanation Of Sample Input 1 :
“abbba” is a palindrome
Sample Input 2:
abcd
Sample Output 2:
false
Explanation Of Sample Input 2 :
“abcd” is not a palindrome.
Constraints:
0 <= |S| <= 10^6
where |S| represents the length of string S.


``` cpp
void reverse(int i , int n , string& str){
    if (i>n/2){
        return ;
    };
    swap(str[i], str[n-i-1]);
    reverse(i+1,n,str);
}

bool isPalindrome(string& str) {
    // Write your code here.
int i =0;

int n = str.length();
string nstr(str);
reverse(i,n,nstr);
return str == nstr;
}


```





Problem statement
Given an integer ‘n’, return first n Fibonacci numbers using a generator function.



Example:
Input: ‘n’ = 5

Output: 0 1 1 2 3

Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
Note:
You don't need to print anything. Just implement the given function.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1:
0 1 1 2 3
Explanation Of Sample Input 1:
The first 5 Fibonacci numbers are 0, 1, 1, 2, and 3.
Sample Input 2:
3
Sample Output 2:
0 1 1
Explanation Of Sample Input 2:
The first 5 Fibonacci numbers are 0, 1, 1.
Expected time complexity
The expected time complexity is O(n).
Constraints:
1 <= n <= 45
Time Limit: 1 s

```cpp

#include <vector>
using namespace std;

void figGenerate(int a, int b, int n, vector<int>& ans) {
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        ans.push_back(a);
    }
    else {
        ans.push_back(a);
        figGenerate(b, b + a, n - 1, ans);
    }
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;
    int a = 0;
    int b = 1;
    figGenerate(a, b, n, ans);
    return ans;
}

```







# Hashmap problem

Problem statement
You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.



Your task is to count the frequency of all elements from 1 to n.

Note:
You do not need to print anything. Return a frequency array as an array in the function such that index 0 represents the frequency of 1, index 1 represents the frequency of 2, and so on.
Example:
Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
Output: [2, 1, 1, 0, 0, 0]
Explanation: Below Table shows the number and their counts, respectively, in the array
Number         Count 
 1                2
 2              1
 3                1
 4                0
 5                0
 6                0
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6 4
1 3 4 3 4 1
Sample Output 1:
2 0 2 2 0 0
Explanation Of Sample Input 1 :
Frequency table:
Number         Count 
 1                2
 2              0
 3                2
 4                2
 5                0
 6                0
Sample Input 2 :
5 5
1 2 3 4 5
Sample Output 2 :
1 1 1 1 1
Explanation Of Sample Input 2 :
Frequency table:
Number         Count 
 1                1
 2              1
 3                1
 4                1
 5                1
Constraints:
1  <= n <= 10^5
1  <= x <= 10^5
1 <= arr[i] <= x


Hints:
Since the range of the elements is known, we can iterate over the range.


```cpp
#include "unordered_map"

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
   

unordered_map<int,int>hash;
for (int i =0;i<n ; i++){
    hash[nums[i]] +=1;
}

vector<int>ans;
for (int i =1;i<=n;i++){
    ans.push_back(hash[i]);
}

   return ans;
}
```