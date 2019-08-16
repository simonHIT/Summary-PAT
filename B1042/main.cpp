#include <iostream>
#include <string>
using namespace std;

int main()
{
    string source;
    getline(cin,source);
    int count[26]={0};
    for(int i=0;i<source.size();i++){
        int index;
        if(source[i]>='a'&&source[i]<='z'){
            index=source[i]-'a';
            count[index]++;
        }else if(source[i]>='A'&&source[i]<='Z'){
            index=source[i]-'A';
            count[index]++;
        }

    }
    int max=count[0];
    int maxindex=0;
    for(int j=0;j<26;j++){
        if(count[j]>max){
            max=count[j];
            maxindex=j;
        }
    }
    char result='a'+maxindex;
    cout<<result<<" "<<max;
    return 0;
}
