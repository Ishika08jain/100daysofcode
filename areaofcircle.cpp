#include <iostream>
using namespace std;
int area(int r){
    int a = (3.14 * r * r);
    return a;
}
int main(){
    int radius;
    cout<<"Enter the area of the circle: "<<endl;
    cin>>radius;
    int areaofc = area(radius);
    cout<<"The area of the circle is: "<< areaofc;
}