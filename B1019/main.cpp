#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
bool upcmp(int a,int b){
  return a>=b;
}
bool downcmp(int a,int b){
  return a<=b;
}
int getInt(vector<int> index){
  return index[0]*1000+index[1]*100+index[2]*10+index[3];
}
int main(){
    int n;
    cin>>n;
    bool flag=true;
    while(flag){
        vector<int> up;
        vector<int> down;
    for(int i=0;i<4;i++){
        up.push_back(n%10);
        down.push_back(n%10);
        n=n/10;
    }
  sort(up.begin(),up.end(),upcmp);
  sort(down.begin(),down.end(),downcmp);
  int upInt,downInt;
  upInt=getInt(up);
  downInt=getInt(down);
  //count++;
  if(upInt-downInt!=0){
    n=upInt-downInt;
    if(n==6174){
        cout<<setfill('0')<<setw(4)<<upInt<<" - "<<setfill('0')<<setw(4)<<downInt<<" = "<<setfill('0')<<setw(4)<<upInt-downInt;
        flag=false;
    }else{
        cout<<setfill('0')<<setw(4)<<upInt<<" - "<<setfill('0')<<setw(4)<<downInt<<" = "<<setfill('0')<<setw(4)<<upInt-downInt<<endl;
    }
  }else{
    cout<<setfill('0')<<setw(4)<<upInt<<" - "<<setfill('0')<<setw(4)<<downInt<<" = 0000";
    flag=false;
  }
  }
}
