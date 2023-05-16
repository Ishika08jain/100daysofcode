#include <iostream>
#include <vector>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;
    int len1= mid -s +1;
    int len2= e-mid;
    

    //dynamically array bana liya

    int *left =new int[len1];
    int *right = new int[len2];
    int k =s;
    for(int i =0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
    k = mid+1;
    for(int i =0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }
    
    //merget karte hai using 2 pointer approach

    int leftIndex =0;
    int rightIndex = 0;
    int mainArray = s;
    while(leftIndex <len1 && rightIndex <len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArray] = left[leftIndex];
            mainArray ++;
            leftIndex++;
        }
        else{
            arr[mainArray] = right[rightIndex];
            mainArray++;

        }
    }
    while(leftIndex <len1){
        arr[mainArray++] = left[leftIndex++];
    }
    while(rightIndex< len2){
        arr[mainArray++]  = right[rightIndex++];
    }



}
void mergeSort(int * arr, int s , int e){
    if(s>=e){
        return ;

    }
    int mid = s+(e-s)/2;
    //left part sort using rec.
    mergeSort(arr, s, mid);
    //right part sort using rec
    mergeSort(arr, mid+1,e);
    //now merge 2 sorted arrays

    merge(arr, s,e);
}
int main(){
    int arr[] = {4,5,13,2,12};
    int n =5;
    int s=0;
    int e = n-1;
   
    mergeSort(arr, s,e);
     for(int i =0;i<n;i++){
        cout<< arr[i] << " ";
    }

}