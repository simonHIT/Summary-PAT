#include<iostream>
using namespace std;
int main(){
  int n;
  char character;
  cin>>n>>character;

  int i=1;
  while(i*i*2-1<=n){
    i++;
  }
  i--;
  int more=n-(i*i*2-1);
  for(int j=i;j>=1;j--){
    int index=j;
      int count1=i-index;
      int count2=i-index;
      while(count1>0){
        cout<<" ";
        count1--;
      }
      int countC=2*index-1;
      while(countC>0){
        cout<<character;
        countC--;
      }
      /*while(count2>0){
        cout<<" ";
        count2--;
      }*/
      cout<<endl;

  }
  for(int k=2;k<=i;k++){
    int index1=k;
      int count1=i-index1;
      int count2=i-index1;
      while(count1>0){
        cout<<" ";
        count1--;
      }
      int countC=2*index1-1;
      while(countC>0){
        cout<<character;
        countC--;
      }
      /*while(count2>0){
        cout<<" ";
        count2--;
      }*/
      cout<<endl;
  }
  cout<<more;
}
