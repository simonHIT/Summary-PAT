#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
typedef struct{
  int number;
  int count;
}node;
bool cmp(node nodea,node nodeb){
  return nodea.number<=nodeb.number;
}
using namespace std;
int main(){
  string n;
  cin>>n;
  vector<node> array;
  for(int i=0;i<10;i++){
    node nodeIndex;
    nodeIndex.number=i;
    nodeIndex.count=0;
    array.push_back(nodeIndex);
  }

  for(int i=0;i<n.size();i++){
    int index=n[i]-'0';
    array[index].count++;
  }
  sort(array.begin(),array.end(),cmp);
  for(int i=0;i<array.size();i++){
    if(array[i].count>0){
        if(i!=(array.size()-1)){
        cout<<array[i].number<<":"<<array[i].count<<endl;
        }else{
        cout<<array[i].number<<":"<<array[i].count;
        }
    }
  }
}
