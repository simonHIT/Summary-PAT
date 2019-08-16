#include<iostream>
#include<vector>
using namespace std;
int main(){
  int count;
  vector<int> nums;
  for(int i=0;i<10;i++){
    cin>>count;
    nums.push_back(count);
  }
  for(int i=1;i<10;i++){
    if(nums[i]>0){
      cout<<i;
      nums[i]--;
      break;
    }
  }
  for(int i=0;i<10;i++){
    while(nums[i]>0){
      cout<<i;
      nums[i]--;
    }
  }
  return 0;
}
