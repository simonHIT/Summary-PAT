#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct{
  int number;
  int de;
  int cai;
}node;
bool cmp(node node1,node node2){
	if((node1.cai+node1.de)!=(node2.cai+node2.de)){
		return (node1.cai+node1.de)>(node2.cai+node2.de);
	}else if(node1.de!=node2.de){
		return node1.de>node2.de;
	}else{
		return node1.number<node2.number;
	}
}

int main(){
	int n,l,h;
	cin>>n>>l>>h;
	vector<node> array1;
	vector<node> array2;
	vector<node> array3;
	vector<node> array4;
	
	for(int i=0;i<n;i++){
		int num,deIndex,caiIndex;
		cin>>num>>deIndex>>caiIndex;
		node nodeIndex;
		nodeIndex.de=deIndex;
		nodeIndex.cai=caiIndex;
		nodeIndex.number=num;
		if(deIndex>=l&&caiIndex>=l){
			if(deIndex>=h&&caiIndex>=h){
				
				array1.push_back(nodeIndex);
			}else if(deIndex>=h&&caiIndex<h){
				array2.push_back(nodeIndex);
			}else if(deIndex<h&&caiIndex<h&&deIndex>=caiIndex){
				array3.push_back(nodeIndex);
			}else{
				array4.push_back(nodeIndex);
			}
		}
	}
	cout<<array1.size()+array2.size()+array3.size()+array4.size()<<endl;
	sort(array1.begin(),array1.end(),cmp);
	for(int i=0;i<array1.size();i++){
		printf("%d %d %d\n", array1[i].number, array1[i].de, array1[i].cai);
		//cout<<(array1.at(i)).number<<" "<<(array1.at(i)).de<<" "<<(array1.at(i)).cai<<endl;
	}
	sort(array2.begin(),array2.end(),cmp);
	sort(array3.begin(),array3.end(),cmp);
	sort(array4.begin(),array4.end(),cmp);
	for(int i=0;i<array2.size();i++){
		printf("%d %d %d\n", array2[i].number, array2[i].de, array2[i].cai);

		//cout<<(array2.at(i)).number<<" "<<(array2.at(i)).de<<" "<<(array2.at(i)).cai<<endl;
	}
	for(int i=0;i<array3.size();i++){
		printf("%d %d %d\n", array3[i].number, array3[i].de, array3[i].cai);
		//cout<<(array3.at(i)).number<<" "<<(array3.at(i)).de<<" "<<(array3.at(i)).cai<<endl;
	}
	for(int i=0;i<array4.size();i++){
		printf("%d %d %d\n", array4[i].number, array4[i].de, array4[i].cai);

		//cout<<(array4.at(i)).number<<" "<<(array4.at(i)).de<<" "<<(array4.at(i)).cai<<endl;
	}
}
