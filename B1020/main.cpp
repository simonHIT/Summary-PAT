#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
typedef struct{
  float count;
  float total;
}Moon;
bool cmp(Moon moona,Moon moonb){
  return (moona.total/moona.count)>=(moonb.total/moonb.count);
}
int main(){
  int n,d;
  cin>>n>>d;
  vector<Moon> moons;
  for(int i=0;i<n;i++){
    float countIndex;
    cin>>countIndex;
    Moon moon;
    moon.count=countIndex;
    moon.total=0;
    moons.push_back(moon);
  }
  for(int j=0;j<n;j++){
    float totalIndex;
    cin>>totalIndex;
    moons[j].total=totalIndex;
  }
  sort(moons.begin(),moons.end(),cmp);
  float money=0.0;
  int index=0;
  while(d>0){
    if(d>=moons[index].count){
      money+=moons[index].total;
      d=d-moons[index].count;
      index++;
    }else{
      money+=d*(moons[index].total)/moons[index].count;
      break;
    }
  }
  cout<<fixed<<setprecision(2)<<money;
}
