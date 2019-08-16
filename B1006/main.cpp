#include<iostream>
using namespace std;
int main(){
  int index;
  cin>>index;
  int h=0;
  int t=0;
  int o=0;
  h=index/100;
  o=index%10;
  t=(index/10)%10;
  for(int i=0;i<h;i++){
    cout<<"B";
  }
  for(int i=0;i<t;i++){
    cout<<"S";
  }
  for(int i=0;i<o;i++){
    cout<<i+1;
  }
}
