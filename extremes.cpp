#include <iostream>
using namespace std;
int main(){
    
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int i =0;
    int j = size -1;
   while(true){
    if(i>j)

    break;
    if(i==j){
        cout<<arr[i]<<" ";
    }
    else{
    cout<<arr[i]<<" ";
    cout<<arr[j]<<" ";
    }
   
   i++;
   j--;
   }
   return 0;

}