#include <iostream>
#include <vector>

using namespace std;

void printSubs(string str, string output, int i){
    if(i>= str.length() ){
        cout<< output <<endl;
        return;
    }
    printSubs(str, output, i+1);
    output.push_back(str[i]);
    printSubs(str, output, i+1);
}
int main(){
    string str = "abc";
    string output = "";
    int i =0;
    printSubs(str, output, i);
    return 0;

}

