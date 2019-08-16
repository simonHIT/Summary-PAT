#include<string>
#include<iostream>
using namespace std;
int main(){
  string source;
  cin>>source;
  int count=0;
  for(int i=0;i<source.size();i++){
    if(source[i]=='P'){
      for(int j=i+1;j<source.size();j++){
        if(source[j]=='A'){
          for(int k=j+1;k<source.size();k++){
            if(source[k]=='T'){
              count++;
            }
          }
        }
      }
    }
  }
  cout<<count;
}
