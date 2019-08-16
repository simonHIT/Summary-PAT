#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct{
  string number;
  int test;
  int table;
}Student;
int main(){
  int n;
  cin>>n;
  vector<Student> students;
  for(int i=0;i<n;i++){
    Student student;
    cin>>student.number>>student.test>>student.table;
    students.push_back(student);
  }
  int k=0;
  cin>>k;
  for(int i=0;i<k;i++){
    int index=0;
    cin>>index;
    for(int j=0;j<students.size();j++){
      if(students[j].test==index){
        cout<<students[j].number<<" "<<students[j].table;
        if(i!=k-1){
          cout<<endl;
        }
        break;
      }
    }
  }

}
