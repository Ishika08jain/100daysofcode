#include <iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a =2;
    int b =0;
    cout<<max(a,b);
    return 0;
}