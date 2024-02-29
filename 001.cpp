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

int main () {
  int i ;
 
 cin>>i;
 int s=sum(i,344);
 cout<<s<<endl;
    examplePair();
    return 0;

}

