#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1={9,23,45,69,78};
    int n=arr1.size();
    int x=56;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int diff=arr1[i]-arr1[j];
            if(diff<0){
                diff*=-1;
            }
            if(diff==x){
                found=1;
                break;
            }
        }
    }
    if(found==1){
        cout<<"Yes"<<endl;
        }
    else{
        cout<<"No"<<endl;
        }

}