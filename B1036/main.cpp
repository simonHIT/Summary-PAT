#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char c;
  cin>>c;
  for(int i=0;i<n;i++){
    cout<<c;
  }
  cout<<endl;
  int col=(n+1)/2;
  for(int i=1;i<col-1;i++){
    cout<<c;
    for(int j=1;j<n-1;j++){
      cout<<" ";
    }
    cout<<c<<endl;
  }
  for(int i=0;i<n;i++){
    cout<<c;
  }
}
