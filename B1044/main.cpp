#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string rarray[14]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec","tam"};
    string qarray[12]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
    for(int i=0;i<n;i++){
        string index="";
        getline(cin,index);
        bool mars=false;
        for(int j=0;j<index.size();j++){
            if(index[j]<'0'||index[j]==' '||index[j]>'9'){
                mars=true;
            }
        }
        if(!mars){
            int total=0;
            for(int k=index.size()-1;k>=0;k--){
                int temp=index[k]-'0';
                int count=index.size()-1-k;
                while(count>0){
                    temp=temp*10;
                    count--;
                }
                total+=temp;
            }
            cout<<total<<endl;
            int r=total%13;
            int q=total/13;
            if(q!=0){
                cout<<qarray[q-1]<<" "<<rarray[r];
            }else{
                cout<<rarray[r];
            }
            if(i!=n-1){
                cout<<endl;
            }
        }else{
            int total=0;
            int spaceIndex=0;
            if(index.size()>3){
            for(int j=0;j<index.size();j++){
                if(index[j]==' '){
                    spaceIndex=j;
                    break;
                }
            }
            string high=index.substr(0,spaceIndex);
            string low=index.substr(spaceIndex+1,index.size()-spaceIndex-1);
            cout<<high<<" "<<low<<endl;
            for(int k=0;k<12;k++){
                if(qarray[k]==high){
                    total+=(k+1)*13;
                    break;
                }
            }
            for(int k=0;k<14;k++){
                if(rarray[k]==low){
                    total+=k;
                    break;
                }
            }
            }else{
               for(int k=0;k<14;k++){
                if(rarray[k]==index){
                    total+=k;
                    break;
                }
            }
            }
            cout<<total;
            if(i!=n-1){
                cout<<endl;
            }
        }
    }
    return 0;
}
