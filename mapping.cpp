#include <unordered_map>
#include <iostream>
using namespace std;
int main(){

  
    //creation
    unordered_map <string, int> m;

    //insertion


    pair<string, int> p = make_pair("Alto" , 10);
    m.insert(p);
    pair<string, int> p2 ("Nexa", 7);
    m.insert(p2);

    m["fortuner"] = 10;


    //access
    cout << m.at("Alto") << endl;
    cout << m.at("Nexa") << endl;

    cout << m.count("Nexa");
    return 0;
}