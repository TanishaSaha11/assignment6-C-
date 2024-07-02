#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1={1,2,3,4};
    int n=arr1.size();
    int x=9;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr1[j]+arr1[i]==x){
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