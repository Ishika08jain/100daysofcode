#include <vector>
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int  target){
    int i =  0;
    int j = size-1;
    int  mid = i + (j-i) / 2;

    while(i<=j){
        int element = arr[mid];
        if(element== target){
            return mid;
        }
        else if(target< element){
            j = mid -1;

        }
        else{
            i = mid+1;
        }
        mid = i + (j-i) / 2;
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int size = 7;
    int target;
    cin>>target;
    int index = BinarySearch(arr, size, target);
    if(index== -1){
        cout<<"Target not found"<<endl;
    }
    else {
        cout<<"Target found at: "<<index<<endl;
    }
    return 0;
}
// int main(){
//     vector <int> arr{1,2,7,9,11,13,15,19};
//     int i =0;
//     int j = arr.size() -1;
//     int mid = (i+j)/2;

//     int key;
//     cin>>key;
//     while(i<=j){
//         int element = arr[mid];
        
//         if(element ==key){
//           cout<< mid;
//         }
//         if(element<key){
//             j = mid- 1;
//         }
//         else {
//         i = mid + 1;
//         }
//         mid = (i+j)/2;

//     }
//     cout<< -1;


// }