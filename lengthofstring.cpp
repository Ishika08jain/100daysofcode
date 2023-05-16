#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter your name"<<endl;
    cin>> name;
    int i =0;
    int count =0;
    while(name[i]!= '\0'){
        count++;
        i++;
    }
   cout<< count<<endl;
   cout<< strlen(name);
return 0;
}