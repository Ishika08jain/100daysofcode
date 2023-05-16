#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{10,1,7,6,14,9};
    int n = arr.size();

    for(int i =1;i<n;i++){
        //STEP A - Fetch
        int j = i-1;
        int val = arr[i];
       for(;j>=0;j--){
        if(arr[j]> val){
            //shift
            arr[j+1] = arr[j];

        }
        else{
            //rukna hai
            break;
        }

       }

    
    //COPY
    arr[j+1]= val;
}
    for(int i =0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
    
}
    