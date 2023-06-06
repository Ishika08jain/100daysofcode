#include <iostream>
#include <string.h>
using namespace std;
bool PalArray(char sen[]){
    int i =0;
    int n = strlen(sen);
    int j = n-1;
    while(i<=j){
        if(sen[i] != sen[j]){
            return false;
            
        }else{
            i++;
            j--;
        }


    }
    return  true;
}
int main(){
    char sen[100];
    cout <<"Enter the sentence : " << endl;
    cin>> sen;
    bool ans = PalArray(sen);
    cout<<"The sen is palindrome: "<< ans;
    return 0; 
}