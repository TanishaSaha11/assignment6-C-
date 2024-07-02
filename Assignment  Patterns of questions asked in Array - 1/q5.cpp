#include<iostream>
#include<vector>
using namespace std;
void removeduplicate(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int ele=v[i];
        for(int j=i+1;j<v.size();j++){
            if(v[j]==ele){
                v[j]=-1;
            }
        }
    }
}
int main(){
    vector<int> arr1={2,2,2};
    int n=arr1.size();
    int x=4;
    int pairs=0;
    removeduplicate(arr1);
    // for(int i=0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr1[j]+arr1[i]==x){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
}