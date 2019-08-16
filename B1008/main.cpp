#include<iostream>
using namespace std;
void right(int* array,int n){
  int temp=array[n-1];
  for(int i=n-1;i>0;i--){
    array[i]=array[i-1];
  }
  array[0]=temp;
}
void left(int* array,int n){
  int temp=array[0];
  for(int i=0;i<n-1;i++){
    array[i]=array[i+1];
  }
  array[n-1]=temp;
}
int main(){

  int n,m;
  cin>>n>>m;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  if(m>=(n/2)){
    int leftm=n-m;
    while(leftm>0){
      left(array,n);
      leftm--;
    }
  }else{
    int rightm=m;
    while(rightm>0){
      right(array,n);
      rightm--;
    }
  }
  for(int i=0;i<n;i++){
    cout<<array[i];
    if(i!=n-1){
      cout<<" ";
    }
  }
  return 0;
}
