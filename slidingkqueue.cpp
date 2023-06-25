#include <iostream>
#include <queue>
#include <stack>
#include <deque>

using namespace std;
solve(int arr[] , int n, int k){
 deque <int> q;
 for(int i =0;i<k;i++){
    if(arr[i] <0){
        q.push_back(i);
            }
 }
 //remaining window
 for(int i =k;i<n;i++){
    //answer dedo purani window ka
    if(q.empty()){
        cout << 0 << " ";

    }else{
        cout << arr[q.front()] << " ";
    }
    //out of window element ko remove kardo

    while(!q.empty() &&  (i - q.front() >=k)){
        q.pop_front();
    }
    if(arr[i] <0){
        q.push_back(i);
    }
 }
 //answer dedo purani window ka
    if(q.empty()){ 
        cout << 0 << " ";

    }else{
        cout << arr[q.front()] << " ";
    }


}




int main(){
    int arr[] = {12,-1, -7,8,-15, 3,16,28};
    int size = 8;
    int k =3;
    solve(arr, size,k);
    

    //printing

   
}