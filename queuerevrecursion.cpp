#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueueRec(queue <int> &q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    reverseQueueRec(q);
    q.push(temp);
}


int main(){
    queue <int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(8);
    reverseQueueRec(q);

    //printing

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

}