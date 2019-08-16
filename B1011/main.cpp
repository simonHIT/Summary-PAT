#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  long a,b,c;
  int count=1;
  while(count<=n){
    cin>>a>>b>>c;
    if(a+b>c){
      cout<<"Case #"<<count<<": true"<<endl;
    }else{
      cout<<"Case #"<<count<<": false"<<endl;
    }
    count++;
  }

  return 0;
}
