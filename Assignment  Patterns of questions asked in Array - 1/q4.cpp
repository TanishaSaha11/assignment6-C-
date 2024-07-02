#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (vec[j] > vec[j+1]) {
                // Swap vec[j] and vec[j+1]
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}
int main(){
    vector<int> arr1={-4,-3,-1,0,2,10};
    int n=arr1.size();
    for(int i=0;i<n;i++){
        arr1[i]*=arr1[i];
    }
    bubbleSort(arr1);
    for(int i:arr1){
        cout<<i<<" ";
    }cout<<endl;

}