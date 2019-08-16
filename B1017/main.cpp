#include<string>
#include<iostream>
using namespace std;
int main(){
  string a;
  int b;
  cin>>a>>b;
  int q=0;
  int r=0;
  q=(a[0]-'0')/b;
  r=(a[0]-'0')%b;
  int len=a.length();
  if((q!=0&&len>1)||len==1){
    cout<<q;
  }
  for(int i=1;i<len;i++){
    r=r*10+(a[i]-'0');
    q=r/b;
    r=r%b;
    cout<<q;
  }
  cout<<" "<<r;
}
