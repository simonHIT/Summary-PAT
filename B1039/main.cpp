#include<iostream>
#include<string>
using namespace std;
void count(string index,int * array){
  for(int i=0;i<index.size();i++){
    if(index[i]>='0'&&index[i]<='9'){
      array[index[i]-'0']++;
    }else if(index[i]>='A'&&index[i]<='Z'){
      array[index[i]-'A'+10]++;
    }else{
      array[index[i]-'a'+36]++;
    }
  }
}
int main(){
  string have,need;
  cin>>have>>need;
  int haveCount[65]={0};
  int needCount[65]={0};
  count(have,haveCount);
  count(need,needCount);
  bool poor=false;
  int countMore,countLess;
  countLess=countMore=0;
  for(int i=0;i<65;i++){
    if(haveCount[i]>=needCount[i]){
      countMore+=(haveCount[i]-needCount[i]);
    }else{
      poor=true;
      countLess+=(needCount[i]-haveCount[i]);
    }
  }
  if(poor){
    cout<<"No "<<countLess;
  }else{
    cout<<"Yes "<<countMore;
  }

}
