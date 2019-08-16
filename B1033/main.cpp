#include<iostream>
#include<string>
using namespace std;
bool have(char index,string error){
  bool have=false;
  for(int i=0;i<error.size();i++){
    if(error[i]==index){
      have=true;
      break;
    }
  }
}
int main(){
  string errorList,source;
  //cin>>errorList>>source;
  getline(cin,errorList);
  getline(cin,source);
  bool plus=have('+',errorList);
  int count=0;
  for(int i=0;i<source.size();i++){
    bool exist=false;
    if(source[i]>='a'&&source[i]<='z'){
      char temp=source[i]-32;
      exist=(have(source[i],errorList)||have(temp,errorList));
      if(!exist){
        cout<<source[i];
        count++;
      }
    }else if(source[i]>='A'&&source[i]<='Z'){
        if(!plus){
            exist=have(source[i],errorList);
            if(!exist){
                cout<<source[i];
                count++;
            }
        }
    }else if(source[i]>='0'&&source[i]<='9'){
      exist=have(source[i],errorList);
      if(!exist){
        cout<<source[i];
        count++;
      }
    }else if(source[i]==(',','.','+','-','_')){
        exist=have(source[i],errorList);
      if(!exist){
        cout<<source[i];
        count++;
      }
    }
  }
  if(count==0){
    cout<<endl;
  }
  return 0;
}
