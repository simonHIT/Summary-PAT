#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef struct{
  string name;
  string year;
  string month;
  string day;
}node;
bool elder(node nodea){
  if(nodea.year<"1814"){
    return false;
  }else if(nodea.year=="1814"){
    if(nodea.month<"09"){
      return false;
    }else if(nodea.month=="09"){
      if(nodea.day<"06"){
        return false;
      }else{
        return true;
      }
    }else{
      return true;
    }
  }else{
    return true;
  }
}
bool yonger(node nodea){
  if(nodea.year<"2014"){
    return true;
  }else if(nodea.year=="2014"){
    if(nodea.month<"09"){
      return true;
    }else if(nodea.month=="09"){
      if(nodea.day<="06"){
        return true;
      }else{
        return false;
      }
    }else{
      return false;
    }
  }else{
    return false;
  }
}
bool cmp(node nodea,node nodeb){
  if(nodea.year!=nodeb.year){
    return nodea.year<=nodeb.year;
  }else{
    if(nodea.month!=nodeb.month){
      return nodea.month<=nodeb.month;
    }else{
      return nodea.day<=nodeb.day;
    }
  }
}
int main(){
  int n;
  cin>>n;
  string name,birth;
  vector<node> people;
  for(int i=0;i<n;i++){
    cin>>name>>birth;
    node nodeIndex;
    nodeIndex.name=name;
    nodeIndex.year=birth.substr(0,4);
    nodeIndex.month=birth.substr(5,2);
    nodeIndex.day=birth.substr(8,2);
    if(elder(nodeIndex)&&yonger(nodeIndex)){
      people.push_back(nodeIndex);
    }
  }
  cout<<people.size();
  sort(people.begin(),people.end(),cmp);
  if(people.size()>0){
    cout<<" "<<people[0].name<<" "<<people[people.size()-1].name;
  }
}
