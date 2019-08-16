#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;
typedef struct{
  string address;
  int value;
  string next;
}node;

int main(){
  int num,unit;
  string first;
  cin>>first>>num>>unit;
  vector<node> nodes;
  for(int i=0;i<num;i++){
    node nodeIndex;
    cin>>nodeIndex.address;
    cin>>nodeIndex.value;
    cin>>nodeIndex.next;
    nodes.push_back(nodeIndex);
  }
  vector<node> list;
  string begin=first;
  while(begin!="-1"){
    for(int i=0;i<num;i++){
      if(nodes[i].address==begin){
        list.push_back(nodes[i]);
        begin=nodes[i].next;
      }
    }
  }
  int count=1;
  while(count*unit<=num){

    for(int i=count*unit-1;i>=(count-1)*unit;i--){
      cout<<list[i].address<<" "<<list[i].value<<" ";
      if(i!=(count-1)*unit){
        cout<<list[i-1].address<<endl;
      }else{
          if(count*unit==num){
            cout<<"-1";
          }else{
            cout<<list[count*unit-1].next<<endl;
          }
      }
    }
    count++;
  }
  for(int i=(count-1)*unit;i<num;i++){
    if(i!=num-1){
      cout<<list[i].address<<" "<<list[i].value<<" "<<list[i].next<<endl;
    }else{
      cout<<list[i].address<<" "<<list[i].value<<" ";
      cout<<list[i].next;
    }
  }
}
