#include<iostream>
using namespace std;
typedef struct{
  int Galleon;
  int Sickle;
  int Knut;
}Money;

void minusMoney(Money a,Money p,Money *result){
  if(a.Knut>=p.Knut){
    result->Knut=a.Knut-p.Knut;
  }else{
    a.Sickle--;
    a.Knut+=29;
    result->Knut=a.Knut-p.Knut;
  }
  if(a.Sickle>=p.Sickle){
    result->Sickle=a.Sickle-p.Sickle;
  }else{
    a.Galleon--;
    a.Sickle+=17;
    result->Sickle=a.Sickle-p.Sickle;
  }
  result->Galleon=a.Galleon-p.Galleon;
}
int main(){
  int g,s,k;
  scanf("%d.%d.%d",&g,&s,&k);
  Money p={g,s,k};
  scanf("%d.%d.%d",&g,&s,&k);
  Money a={g,s,k};
  Money result;
  minusMoney(a,p,&result);
  if(result.Galleon<0){
    minusMoney(p,a,&result);
    printf("%d.%d.%d",-1*result.Galleon,result.Sickle,result.Knut);
  }else{
    printf("%d.%d.%d",result.Galleon,result.Sickle,result.Knut);
  }
}
