#include <iostream>
using namespace std;
void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printArray(a,n);
}

