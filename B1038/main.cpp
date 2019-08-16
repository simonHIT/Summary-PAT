#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> scores;
  while(n>0){
    int index;
    cin>>index;
    scores.push_back(index);
    n--;
  }
  int k;
  cin>>k;
  int target[k];
  for(int i=0;i<k;i++){
    cin>>target[i];
  }
  int number[k];
  for(int i=0;i<k;i++){
    number[i]=0;
  }
  for(int i=0;i<scores.size();i++){
    for(int j=0;j<k;j++){
      if(scores[i]==target[j]){
        number[j]++;
        break;
      }
    }
  }
  for(int j=0;j<k;j++){
    cout<<number[j];
    if(j!=k-1){
      cout<<" ";
    }
  }
}
