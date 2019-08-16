#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> array1;
  vector<int> array2;
  vector<int> array3;
  vector<int> array4;
  vector<int> array5;
  int index;
  int count=0;
  while(count<n){
    cin>>index;
    switch(index%5){
      case 0:
        array1.push_back(index);
        break;
      case 1:
        array2.push_back(index);
        break;
      case 2:
        array3.push_back(index);
        break;
      case 3:
        array4.push_back(index);
        break;
      case 4:
        array5.push_back(index);
        break;
      default:
        break;

    }
    count++;
  }
  int a1,a2,a3,a5;
  float a4=0.0;
  a1=a2=a3=a5=0;
  if(array1.size()>0){
  	  for(int i=0;i<array1.size();i++){
    	if((array1.at(i))%2==0){
      	a1+=array1.at(i);
    	}
  	}
  	if(a1>0){
  		  	cout<<a1<<" ";
	  }else{
	  	cout<<"N ";
	  }
  }else{
  	cout<<"N ";
  }
  if(array2.size()>0){
  	  for(int i=0;i<array2.size();i++){
    if(i%2==0){
      a2+=array2.at(i);
    }else{
      a2-=array2.at(i);
    }
  }
  cout<<a2<<" ";

  }else{
  	cout<<"N ";
  }

  a3=array3.size();
  if(a3!=0){
  	cout<<a3<<" ";
  }else{
  	cout<<"N ";
  }
  if(array4.size()>0){
  	for(int i=0;i<array4.size();i++){
    a4+=array4.at(i);
  	}
  	  a4=a4/array4.size();
	printf("%.1f",a4);
	cout<<" ";
  }else{
  	cout<<"N ";
  }
  if(array5.size()>0){
  	  for(int i=0;i<array5.size();i++){
    if(array5.at(i)>a5){
      a5=array5.at(i);
    }
  }
  	cout<<a5;
  }else{
  	cout<<"N";
  }

}
