#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1,b1,a2,b2;
    int totala=0;
    int totalb=0;
    for(int i=0;i<n;i++){
        cin>>a1>>b1>>a2>>b2;
        if(b1==(a1+a2)&&b2!=(a1+a2)){
            totala++;
        }else if(b2==(a1+a2)&&b1!=(a1+a2)){
            totalb++;
        }
    }
    cout<<totalb<<" "<<totala;
    return 0;
}
