#include<iostream>
#include<string>
using namespace std;
int main(){
  int n=0;
  cin>>n;
  int maxscore,minscore,score;
  maxscore=0;
  minscore=100;
  string maxname,minname,name,maxnum,minnum,num;
  for(int i=0;i<n;i++){
    cin>>name>>num>>score;
    if(score>=maxscore){
      maxscore=score;
      maxnum=num;
      maxname=name;
    }
    if(score<=minscore){
      minscore=score;
      minnum=num;
      minname=name;
    }
  }
  cout<<maxname<<" "<<maxnum<<endl;
  cout<<minname<<" "<<minnum<<endl;
  return 0;
}
