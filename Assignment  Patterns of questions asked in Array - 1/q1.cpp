#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1={1,2,3};
    vector<int> v2={4,5,6,7};
    int m=v1.size();
    int n=v2.size();
    vector<int> v3(m+n);
    for(int i=0;i<m;i++){
        v3[i]=v1[i];
    }
    int j=0;
    for(int i=m;i<m+n;i++){
        v3[i]=v2[j++];
    }
    for(int a:v3){
        cout<<a<<" ";
    }

}