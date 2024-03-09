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
    v.push_back(1);// it push 1 in the enmpty container 
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


void explainQueue(){

    queue <int> q;
    q.push(1); // 1
    q.push(2); // 1,2
    q.emplace (4); // 1,2,4

}





int main () {
  int i ;
 
 cin>>i;
 int s=sum(i,344);
 cout<<s<<endl;
    examplePair();
    return 0;

}

