#include<iostream>
#include<string>
using namespace std;
int main(){
  string a,b;
  char da,db;
  cin>>a>>da>>b>>db;
  int inta,intb;
  inta=0;
  intb=0;
  int counta=0;
  int countb=0;
  for(int i=0;i<a.size();i++){
    if(a[i]==da){
      counta++;
      if(counta>1){
      inta=inta*10+(da-'0');
    }else{
      inta+=(da-'0');
    }
    }

  }
  for(int j=0;j<b.size();j++){
    if(b[j]==db){
      countb++;
      if(countb>1){
      intb=intb*10+(db-'0');
    }else{
      intb+=(db-'0');
    }
    }

  }
  cout<<intb+inta;
}
