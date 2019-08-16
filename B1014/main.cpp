#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
using namespace std;
string getWeek(char index){
  string result;
  switch(index){
    case 'A':
    result="MON";
    break;
    case 'B':
    result="TUE";
    break;
    case 'C':
    result="WED";
    break;
    case 'D':
    result="THU";
    break;
    case 'E':
    result="FRI";
    break;
    case 'F':
    result="SAT";
    break;
    case 'G':
    result="SUN";
    break;
    default:
    break;
  }
  return result;
}
int main(){
  string a,b,c,d;
  cin>>a>>b>>c>>d;
  int i,j,k;
  i=j=k=0;
  string week;
  int hour;
  int min;
  while(i<a.length()&&i<b.length()){
  	if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G')){
  		week=getWeek(a[i]);
  		break;
	  }
	  i++;
  }
  i++;
  while(i<a.length()&&i<b.length()){
  	if(a[i]==b[i]&&((isdigit(a[i]))||(a[i]>='A'&&a[i]<='N'))){
  		hour=isdigit(a[i])?a[i]-'0':a[i]-'A'+10;
  		break;
	  }
	  i++;
  }
  while(j<c.length()&&j<d.length()){
  	if(c[j]==d[j]&&isalpha(c[j])){
  		min=j;
  		break;
	  }
	  j++;
  }
  cout<<week<<" ";
  cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<min;
  //printf("%02d:%02d",hour,min);
  
  
}
