
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