#include <iostream>
using namespace std;

void reverse(int a[], int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j = n-1;
    while(i<j){
        int temp=a[i];
        a[i] = a[j];
        a[j]=temp;
        i++;
        j--;
    }
    void printArray(int a[], int n){
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
    }
    
}
int main(){
  int k=10;
  int b[10] = {1,2,3,4,5};
  reverse(b,5);
  printArray(b,5);
  cout<<reverse(b,5);
}