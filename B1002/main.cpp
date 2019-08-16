#include<iostream>
#include<string>
using namespace std;
int main(){

  string s;
  string characters[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  cin>>s;

  int sum=0;

  for(int i=0;i<s.length();i++){
    sum+=(s[i]-'0');
  }

  string sumstr=to_string(sum);
  for(int j=0;j<sumstr.length();j++){
    cout<<(characters[sumstr[j]-'0']);
    if(j!=(sumstr.length()-1)){
      cout<<" ";
    }

  }
  return 0;
}
