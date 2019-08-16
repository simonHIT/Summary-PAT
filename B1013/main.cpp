#include<iostream>
#include<vector>
using namespace std;
bool isSuShu(int index){
  for(int i=2;i*i<=index;i++){
    if(index%i==0){
      return false;
    }
  }
  return true;
}
int main(){
  int m,n;
  cin>>m>>n;
  int count=0;
  vector<int> sushu;
  for(int i=2;i<10000;i++){
    if(isSuShu(i)){
      count++;
      if(count>=m&&count<=n){
      	sushu.push_back(i);
	  }else if(count>n){
	  	break;
	  }else{
	  	continue;
	  }
    }

  }

  for(int i=0;i<sushu.size();i++){
  	cout<<sushu.at(i);
  	if((i%10+1)==10){
  		cout<<endl;
	  }else {
	  	if(i!=sushu.size()-1){
	  			  	cout<<" ";
		  }
	  }
  }
}
