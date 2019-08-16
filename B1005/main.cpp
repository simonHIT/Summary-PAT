#include<iostream>
using namespace std;
int main(){
  int n =0;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  int temp=0;
  for(int i=0;i<n;i++){
    if(array[i]!=0){
      temp=array[i];
      while(temp!=1){
        if(temp%2==0){
          temp=temp/2;
          for(int i=0;i<n;i++){
            if(array[i]==temp){
              array[i]==0;
            }
          }
        }else{
          temp=(3*temp+1)/2;
          for(int i=0;i<n;i++){
            if(array[i]==temp){
              array[i]==0;
            }
          }
        }
      }
    array[i]=0;
    }
  }
  int keynum=0;
  for(int i=0;i<n;i++){
    if(array[i]!=0){
      keynum++;
    }
  }
  int keyArray[keynum];
  int j=0;
  for(int i=0;i<n;i++){
    if(array[i]!=0){
      keyArray[j]=array[i];
      j++;
    }
  }
  for(int i=0;i<keynum-1;i++){
    int temp;
    for(int j=0;j<keynum-1-i;j++){
      if(keyArray[j+1]<keyArray[j]){
        temp=keyArray[j+1];
        keyArray[j+1]=keyArray[j];
        keyArray[j]=temp;
      }
    }
  }
  for(int i=keynum-1;i>0;i--){
    cout<<keyArray[i];
    if(i!=0){
      cout<<" ";
    }
  }

}
