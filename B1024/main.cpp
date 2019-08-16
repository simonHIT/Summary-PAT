#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
  string a;
  cin>>a;
  int sign=1;
  if(a[0]=='-'){
    sign=-1;
  }
  int count=1;
  int eIndex;
  float base=0.0;
  base+=(a[1]-'0');
  //cout<<base<<endl;
  for(int i=3;i<a.length();i++){
    if(a[i]!='E'){
      count++;
      //cout<<count<<endl;
      int pointCount=count-1;
      float value=a[i]-'0';
      while(pointCount>0){
        value=value*0.1;
        pointCount--;
      }
      base+=value;
    }else{
      eIndex=i;
      break;
    }
  }
  //cout<<eIndex<<endl;
  bool plus=true;
  if(a[eIndex+1]=='-'){
    plus=false;
  }
  int ecount=0;
  int e=0;
  for(int i=a.length()-1;i>eIndex+1;i--){
    int indexValue=a[i]-'0';
    int temp=ecount;
    while(temp>0){
      indexValue*=10;
      temp--;
    }
    e+=indexValue;
    ecount++;
  }
  int validatedCount=0;
  int pointCount=0;
  if(plus){
    validatedCount=e+1;
    pointCount=count-1-e;
    while(e>0){
      base*=10;
      e--;
    }
  }else{
    validatedCount=e+count-1;
    pointCount=count-1+e;
    while(e>0){
      base*=0.1;
      e--;
    }
  }
  base*=sign;
  if(pointCount>0){
      cout<<setw(validatedCount)<<fixed<<setprecision(pointCount)<<base;
  }else{
      cout<<setw(validatedCount)<<fixed<<setprecision(0)<<base;
  }
}
