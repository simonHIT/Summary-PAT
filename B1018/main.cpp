#include<iostream>
using namespace std;
typedef struct{
  int win;
  int def;
  int bot;
  int cwin;
  int bwin;
  int jwin;
}node;
int win(char a,char b){
  int result=2;
  switch(a){
    case 'C':
    if(b=='J'){
      result=0;
    }else if(b=='C'){
      result=1;
    }
    break;
    case 'J':
    if(b=='B'){
      result=0;
    }else if(b=='J'){
      result=1;
    }
    break;
    case 'B':
    if(b=='C'){
      result=0;
    }else if(b=='B'){
      result=1;
    }
    break;
    default:
    break;
  }
  return result;
}
char winOption(node index){
  char result;
  if(index.bwin>=index.cwin&&index.bwin>=index.jwin){
    result='B';
  }else if(index.cwin>index.bwin&&index.cwin>=index.jwin){
    result='C';
  }else if(index.jwin>index.cwin&&index.jwin>index.bwin){
    result='J';
  }
  return result;
}
int main(){
  int n;
  cin>>n;
  char A,B;
  node nodea={0,0,0,0,0,0};
  node nodeb={0,0,0,0,0,0};
  for(int i=0;i<n;i++){
    cin>>A>>B;
    if(win(A,B)==0){
      nodea.win++;
      nodeb.def++;
      if(A=='C'){
        nodea.cwin++;
      }else if(A=='B'){
        nodea.bwin++;
      }else{
        nodea.jwin++;
      }
    }else if(win(A,B)==1){
      nodea.bot++;
      nodeb.bot++;
    }else{
      nodea.def++;
      nodeb.win++;
      if(B=='C'){
        nodea.cwin++;
      }else if(B=='B'){
        nodea.bwin++;
      }else{
        nodea.jwin++;
      }
    }
  }
  cout<<nodea.win<<" "<<nodea.bot<<" "<<nodea.def<<endl;
  cout<<nodeb.win<<" "<<nodeb.bot<<" "<<nodeb.def<<endl;;
  cout<<winOption(nodea)<<" "<<winOption(nodeb);
}
