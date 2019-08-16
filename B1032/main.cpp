#include<iostream>
#include<vector>
using namespace std;
typedef struct{
    int number;
    int total;
}school;

int main(){
    int n;
    cin>>n;
    vector<school> schools;
    int num,score;
    school max={0,0};
    while(n>0){
        cin>>num>>score;
        bool find=false;
        for(int i=0;i<schools.size();i++){
            if(schools[i].number==num){
                schools[i].total+=score;
                if(schools[i].total>max.total){
                    max.number=schools[i].number;
                    max.total=schools[i].total;
                }
                find=true;
                break;
            }
        }
        if(!find){
            school schoolIndex={num,score};
            if(score>max.total){
                max.number=num;
                max.total=score;
            }
            schools.push_back(schoolIndex);
        }
        n--;
    }
    /*
    school max={num,score};
    for(int i=0;i<schools.size();i++){
        if(schools[i].total>max.total){
            max.number=schools[i].number;
            max.total=schools[i].total;
        }
    }*/
    cout<<max.number<<" "<<max.total;
}
