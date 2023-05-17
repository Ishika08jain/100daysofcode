#include <iostream>
using namespace std;
int main(){
//     char c;
//     cin>>c;
//     int count =0;
//     while(c!='$'){
//         count++;
//         cin>>c;
//     }
//     cout<<count<<endl;
// }
char c;
int count1 = 0;

int count2 = 0;
int count3=0;
c =  cin.get();
while(c!='$'){
    if(islower(c)){
    count1++;
      
    }
    else if(isdigit(c)){
        count2++;
       
    }
    else if(c== ' ' || c== '\t' || c=='\n'){
        count3++;
        
        
    }
    c=cin.get();

}
cout<<count1<<" "<<count2<<" "<<count3;

}