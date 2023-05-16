#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int spaces = 1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j =1;
        while(j<=i){
            cout<<i;
            j++;
            
        }
        int k =1;
        while(k!=2i-2){
            cout<<i-1;
            k++;
        }
        cout<<endl;
        i++;
    }
}