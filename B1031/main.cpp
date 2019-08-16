#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  int level[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  char m[]={'1','0','X','9','8','7','6','5','4','3','2'};
  string index;
  vector<string> invalidated;
  for(int i=0;i<n;i++){
    cin>>index;
    int total=0;
    bool validated=true;
    for(int j=0;j<17;j++){
      if(index[j]>='0'&&index[j]<='9'){
        total+=(index[j]-'0')*level[j];
      }else{
        validated=false;
        break;
      }
    }
    int z=total%11;
    if(m[z]!=index[17]){
      validated=false;
    }
    if(!validated){
      invalidated.push_back(index);
    }
  }
  if(invalidated.size()>0){
    for(int i=0;i<invalidated.size();i++){
      cout<<invalidated[i];
      if(i!=invalidated.size()-1){
        cout<<endl;
      }
    }
  }else{
    cout<<"All passed";
  }
}
