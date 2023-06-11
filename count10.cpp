#include <iostream>
using namespace std;
int main(){
    int count1 =0;
    int count0 =0;
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
        else{
            count0++;
        }

    }
    cout<<"The number of 1 in the arrays is: "<<count1<<endl;
    cout<<"The number of 0 in the arrays is: "<<count0;
    return 0;

}