// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
// #include <std>
using namespace std;

int main() {
    vector <int> A;
    int a;
    while(cin>>a){
        A.push_back(a);
    }
    int k;
    cin>>k;
    for(int i=0;i<A.size();i++){
        cout<<A[i];
    }

    return 0;
}