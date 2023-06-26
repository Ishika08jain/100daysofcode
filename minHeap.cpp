#include <iostream>
#include <queue>
using namespace std;
int getMinHeap(int arr[], int n,int k){
    priority_queue <int, vector <int> , greater <int> > pq;
 for(int i =0;i<k;i++){
        pq.push(arr[i]);


    }
    for(int i =k;i<n;i++){
        int element = arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(element);

        }
    }
    int ans = pq.top();
    return ans;
}
int getMaxHeap(int arr[] , int n , int  k){
    priority_queue <int> pq;
    //insert initial k elements
    for(int i =0;i<k;i++){
        pq.push(arr[i]);


    }
    for(int i =k;i<n;i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);

        }
    }
    int ans = pq.top();
    return ans;

}
int main(){
    int arr[] = {10,5,50,20,4,15};
    int n = 6;
    int k = 6;
    int ans = getMinHeap(arr, n , k);
  cout << ans;
  return 0;

    }