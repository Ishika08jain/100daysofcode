#include <iostream>
using namespace std;
bool reverse(char a[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
    if(a[s]!=a[e]){
    return 0;
    }
    else{
        s++;
        e--;
    } 
    }
    return 1;
}
int length(char name[]){
    int i =0;
    int count =0;
    for(;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[200];
    cin>>name;
    int len = length(name);
    cout<< "Palindrome or not " << reverse(name,len)<<endl;
}

