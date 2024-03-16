/**
    * * Highlight: STL standard template library
    * ! Highlight,Container, Function, Iterators<
**/

# include"bits/stdc++.h"
using namespace std;
int sum(int a,int b){
    return a+b;
};

void examplePair(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" we are printing the first pair and now we are printing the second pair"<<p.second<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{4,6}};
    cout<<arr[0].first<<" this is printing the first element of the first tuple"<< arr[1].first<<" this will print the second the second of the second " <<endl;
    pair <int,pair<int,int>> a={3,{63,46}};
    cout<<a.first<<"this will print the first"<<a.second.first<<"this will  print the first fo the second "<<a.second.second<<"this will print the first of the second"<<endl;
 
}
void explainVector(){
    vector<int> v;
    v.push_back(1);// it push i in the enmpty container 
    v.emplace_back(2);// it dynamicaly increase the size and emplace_back works faster then the push_back
    // vector is the of dynamic size array is a constant size bbut vector is of variable size
    vector<pair<int,int>>vec;
    v.push_back({1,3});
    v.emplace_back(1,2);
    // the push_back does not by default that the input is the pair 
    // the emplace_back  have the different syntax it by default understands the input is the pair

    vector <int> v(5,100);// this means the vector with 5 instances of 100 value is declared {100,100,100,100,100}
    vector<int > v(5);//this means the vector of size 5 with 0 or any garbage value is declared
    vector<int>v1(5,20);//   this means the vector of the size 5 of value 20 {20,20,20,20,20}
    vector<int > v2(v1); // to copy vector 1 in the vector 2
    // since the vector is dynamic in nature if we declare its by default size then also we and increase its size
    // the vector can be accessed in the same way as the array

    vector<int>::iterator it =v.begin(); // here we can say any thing for the iterattor and v.begin () gives the address  of the element and when we do it ++ the addtess is increased
    it++;
    cout<<*(it)<<" "; // it  -> this is the address of the element and *(it) will give the vlaue at that memory 
    cout<<v[0]<< " " << v.at(0);


    it = it +2;
    cout<<  * (it)<< " ";
    vector<int> :: iterator it =v.end(); // suppose {12,34,63,45} we will think that it will point on the 45 but no to get it point out on 45 we have to do -1 of the iterator it is by default at the place of vector lengths place
    vector <int > :: iterator it =v.rend();// this is the first element after reversing the vector
    vector <int > :: iterator  it = v.rbegin();// this is the last element after reversion the vector
    cout << v[0]<< " "<<v.at(0);
    cout<<v.back()<< " ";// this is the length of vector -1 means last element of the input array or vector
    for (vector<int> :: iterator it =v.begin(); it != v.end();it++){
        cout<<*(it)<<" ";

    };
    for (auto it =v.begin(); it != v.end(); it++){// auto is the stl function which automatically assign the new variable as per the int , float, char input
        cout << *(it) << " ";
    };
    for (auto it : v){ // for  each loog for vectors
    cout << it << " ";
    };
    // {10,20,30,40,50}
    v.erase(v.begin()+1);
    // {10,20,30,40,50,60,70}
    v.erase (v.begin()+2,v.begin()+4) // result will be {10,20,50,60,70} [start,end)

    // Insert function 
    vector<int> v(2,100); // 100,100
    v.insert(v.begin(),300); // 300,100,100
    v.insert (v.begin()+1,2,10) // 300,10,10,100,100
    vector <int> copy (2,50); // 50,50
    v.insert (v.begin(),copy.begin(),copy,end());// 50,50,300,10,10,100,100
    // 10,20
    cout << v.size();// 2
    v.pop_back();//10
    // v1 -> 10,20
    // v2 -> 30,40
    v1.swap(v2); // v1-> 30,40 and v2 -> 10,20
    v.clear() ;
    cout<<v.empty();
    
}


void explainList (){
    list <int> ls ;
    ls.push_back(2); // 2
    ls.emplace_back (3); // 2,3
    ls.push_front(5); // 5,2,4
    ls.emplace_front();
    // rest function same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap
}



void explainDequeue(){
    deque<int> dq;
    dq.push_back(1); //1
    dq.emplace_back(2); // 1,2
    dq.push_front(4); // 4,1,2
    dq.emplace_front (3); // 3,4,1,2
    dq.pop_back(); // 3,4,1
    dq.pop_front (); // 4,1
    dq.back();
    dq.front();
    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert , size , swap
}


void explianSatck(){ // LIFO lsast in first out in stack we have only three operatoins push pop and top
    satck<int> st;
    st.push(1); // 1
    st.push(2); // 2,1
    st.push (3); // 3,2,1
    st.push(3); // 3,3,2,1
    st.emplace(5); // 5,3,3,2,1
    cout<<st.top(); // prints 5 " we dont have access of the indes **st[2] is invalid **"
    st.pop(); // st looks like 3,3,2,1
    cout<< st.top(); // 3
    cout<< st.size(); // 4
    cout << st.empty(); // flase

    stack<int>st1,st2;
    st1.swap(st2);

}


void explainQueue(){// queue is a fifo data structure first in first out

    queue <int> q;
    q.push(1); // 1
    q.push(2); // 1,2
    q.emplace (4); // 1,2,4
    q.back() += 5;
    cout<<q.back(); // prints 9
    // q is 1,2,9
    cout<< q.front(); // prints 1
    q.pop(); // 2,9
    cout<<q.front(); // prints 2
     // size swap empty some as stack

}


// priority queue is not a linear data structure inside of this a tree data structure is maintained so the time for operations are costly
void explainPriorityQueue(){
    priority_queue<int> pq; // this priority queue with by default max value at top is also called max heap
    pq.push(5); // 5
    pq.push(8); // 5,2
    pq.push(8); // 8,5,2
    pq.emplace(10); // 10,8,5,2
    cout<<pq.top(); // prints 10
    pq.pop(); // 8,5,2
    cout<<pq.top(); // prints 8
    // by default the priority quesus is initialized as the highest value element is at the top
    // size sway empty function are same as others

    // min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5); // 5
    pq.push(2); // 2,5
    pq.push(8); // 2,5,8
    pq.emplace(10); // 2,5,8,10
    cout<<pq.top(); // prints 10

}


void explainSet (){

    // in set everything occurs in the logarithmic of n every operation
    set<int> st;
    st.insert(1); //1
    st.emplace(2); // 1,2
    st.insert (2); // 1,2,
    st.insert (4); // 1,2,4
    st.insert ( 3) ; // 1,2,3,4

    // functionality of insert in vector
    // can be used also that only incresases
    // efficiency

    // begin (), end(), rbegin(), rend(), size( ) , empty (), swap ( ) are same as those of above

    // 1,2,3,4,5
    auto it = st.find (3);
    // 1,2,3,4,5
    auto it = st.find(6);
    //1,4,5
    st.erase (5); // erases 5 takes logarithmic time

    int cnt = st.count (1); // will always give 1 or 0 beacouse duplicate element not allowed
    auto it = st.find(3);
    st.erase (it); // it take constant time

    // 1,2,3,4,5
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase (it1,it2); // after ersase 1,4,5 [first, last)

    // lowewr_bound ( ) & upper_bound() function works in the same way
    // as in vector it does 
    // this is the syntax

    auto it = st.lower_bound(2);
    auto it= st.upper_bound(3);
}

void explainMultiSet(){
    // every this is same as the set
    // only stores duplicate elements

    multiset<int> ms;
    ms.insert(1);// 1
    ms.insert(1);// 1,1
    ms.insert(1);// 1,1,1
    ms.insert(1);// 1,1,1,1

    ms.erase (1);// all the 1 are erased and ramining in null set
    // when we give erase the element it erases all the element and the duplicate element
    // when we say erase element at address the without changing any duplicate element it erases that address

    int cnt = ms.count (1); // ->4

    // only a single one erased
    ms.erase ( ms.find(1));

    ms.erase(ms.find(1),ms.find(1) + 2)
    // rest all function same as set
}

void explainUnorderedSet(){
    unordered_set<int> st;
    //lower_bound and upper_bound function
    // does not works, rest all function are same
    // as above , it does not stores in any 
    // particular order it has a better complexity
    // than set in most cases , except some when collisions happens

    // all the operation are same and they work in big O of 1 and it give worst complexity as big O of N
}


void explainMap(){
    // map data structure suppose is school 3 people with the name raj then our data structure will store the roll number as key and the name as the value so that we can uniquely identify them
    // the key and value can be of any data type int string double pair
    map <int,int> mpp;
    map <int,pair<int,int>> mpp;
    map <pair<int,int>,int> mpp;
     mpp [{2,3}]=10;

// suppose we take an example
    map <int,int> mpp;
    mpp [1]= 2;
    mpp.emplace({3,1});
    mpp.insert ({2,4});
    // map stores unique keys in sorted order 

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for (auto it:mpp){
        cout<<it.first<<" "<< it.second<< endl;
    }
    cout<<mpp[1];
    cout<<mpp[5] ;
    
    auto it = mpp.find(3);
    cout<< *(it).second; // *(it) -> gives expamle {3,5} amd *(it).second -> gives 5
    auto it = mpp.find (5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // and other function erase swap size empty are same
}

void explainMultiMap(){
    // everythisn same as map only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // same as set and unordered_set difference every thing in O(1) and worst case O(N)
}

bool comp (pair<int,int> p1, pair <int,int>p2){
    if (p1.second <p2.second){
        return true;
    }else if (p1.second == p2.second){
        if (p1.first > p2.second) return true ;
    }
    return false;
}

void explainSort(){

    
    sort (a,a+n);
    sort (v.begin(),b.end());

    // if 1,5,3,2 then  sort [start,end)
    sort (a+2,a+4);

    // to sort them in decending order
    sort (a,a+n,greater<int>);


    pair <int,int> a[]={{1,2},{2,1},{4,1}};

    // sort if according to second element
    // if second element is same , then sort 
    // it according to first element but in descending order

    sort (a,a+n,comp);
    // {4,1},{2,1},{1,2};

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt  = __builtin_popcountll();

    string s = "123";
    do { 
        count << s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = * max_element(a,a+n)

}

int main () {
  int i ;
 
 cin>>i;
 int s=sum(i,344);
 cout<<s<<endl;
    examplePair();
    return 0;

}

