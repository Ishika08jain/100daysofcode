#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector <int> ans;
    vector<int> arr{1,2,3,4,5,6,7};
    int key;
    cin>>key;
    for(int i =0;i<arr.size();i++){
        int element = arr[i];
        for(int j =i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == key ){
                cout<<"("<<element<<" , "<<arr[j]<<")"<<endl;
            }
            // cout<<"("<<element<<", "<<arr[j]<<")"<<endl;
        }
    }

}