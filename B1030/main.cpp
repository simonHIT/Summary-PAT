#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
  return a<=b;
}
int main(){
  int n,p;
  cin>>n>>p;
  vector<int> array;
  for(int i=0;i<n;i++){
    int index;
    cin>>index;
    array.push_back(index);
  }
  sort(array.begin(),array.end(),cmp);
  int num=0;
  int j;
  for(int i=array.size()-1;i>=0;i--){
    int max=array[i];
    int min=0;
    int temp=0;
    if(i+1<=num){
        break;
    }
    for(j=0;j<=i-num;j++){
      min=array[j];
      if(min*p>=max){
        temp=i-j+1;
        if(temp>num){
          num=temp;
          break;
        }
      }
    }
  }
  cout<<num;
}
