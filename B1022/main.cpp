#include<iostream>
#include<stack>
using namespace std;
int main(){
  int a,b,d;
  cin>>a>>b>>d;
  stack<int> stack;
  int total=a+b;
  if(total==0){
    cout<<0;
    return 0;
  }
  int q,r;
  r=total%d;
  stack.push(r);
  q=total/d;
  while(q!=0){
    r=q%d;
    q=q/d;
    stack.push(r);
  }
  //stack.push(q);
  while(!stack.empty()){
    char index;
    if(stack.top()<10){
        index=stack.top()+'0';
    }else{
        index=stack.top()+'0'+8;
    }
    cout<<index;
    stack.pop();
  }
  return 0;
}
