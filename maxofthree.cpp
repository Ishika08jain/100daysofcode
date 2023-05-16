#include <iostream>
using namespace std;
int getMaxNum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c && b>a){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<getMaxNum(a,b,c);
    return 0;
}