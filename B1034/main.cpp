#include <iostream>
using namespace std;
int gongyushu(int a,int b){
    int result=1;
    a=(a>0)?a:-1*a;
    b=(b>0)?b:-1*b;
    int min=(a<=b)?a:b;
    for(int i=min;i>=2;i--){
        if((a%i==0)&&(b%i==0)){
            result=i;
            break;
        }
    }
    return result;
}
void simple(int a,int b){
    bool minus=false;
    if(b==0){
        cout<<"Inf";
    }else{

    int temp=gongyushu(a,b);

    if(a*b<0){
        cout<<"(-";
        minus=true;
    }
    a=a/temp;
    b=b/temp;
    a=(a>0)?a:-1*a;
    b=(b>0)?b:-1*b;
    int z=a/b;
    int r=a%b;
    if(z!=0&&r!=0){
        cout<<z<<" "<<r<<"/"<<b;
    }else if(z!=0&&r==0){
        cout<<z;
    }else if(z==0&&r!=0){
        cout<<r<<"/"<<b;
    }else{
        cout<<0;
    }
    if(minus)
        cout<<")";
    }
}
int main()
{
    int a1,a2,b1,b2;
    cin>>a1;
    cin.ignore();
    cin>>b1;
    cin.ignore();
    cin>>a2;
    cin.ignore();
    cin>>b2;
    //plus
    simple(a1,b1);
    cout<<" + ";
    simple(a2,b2);
    cout<<" = ";
    simple(a1*b2+a2*b1,b1*b2);
    cout<<endl;
    //minus
    simple(a1,b1);
    cout<<" - ";
    simple(a2,b2);
    cout<<" = ";
    simple(a1*b2-a2*b1,b1*b2);
    cout<<endl;
    //multiple
    simple(a1,b1);
    cout<<" * ";
    simple(a2,b2);
    cout<<" = ";
    simple(a1*a2,b1*b2);
    cout<<endl;
    //div
    simple(a1,b1);
    cout<<" / ";
    simple(a2,b2);
    cout<<" = ";
    simple(a1*b2,a2*b1);
}
