#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
  stack<string> v;
  string index;
  while(cin>>index)
    v.push(index);
  cout<<v.top();
  v.pop();
while(!v.empty()){
  cout<<" "<<v.top();
  v.pop();
}
}
