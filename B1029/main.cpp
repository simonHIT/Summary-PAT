 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 bool have(string result,char index){
     bool own=false;
     for(int j=0;j<result.size();j++){

       if(result[j]==index){
         own=true;
       }
     }
     return own;
 }
 int main(){
   string source,result;
   cin>>source>>result;
   vector<char> error;
   for(int i=0;i<source.size();i++){
     char index=source[i];
     char index1;
     bool own=false;
     if(index>='a'&&index<='z'){
        index1=index-32;
        own=(have(result,index)||have(result,index1));
        index=index1;
     }else if(index>='A'&&index<='Z'){
        index1=index+32;
        own=(have(result,index)||have(result,index1));
     }else{
        own=have(result,index);
     }
     if(own==false){
       bool have=false;
       for(int k=0;k<error.size();k++){
         if(error[k]==index){
           have=true;
           break;
         }
       }
       if(!have){
         if(index>='a'&&index<='z'){
             index-=32;
            cout<<index;
         }else{
            cout<<index;
         }
         error.push_back(index);
       }
     }
   }
 }
