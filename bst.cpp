#include <iostream>
#include <queue>
#include <limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
    }

};
class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;
    NodeData(int size, int max, int min, bool valid){
        this-> size = size;
        minVal = min;
        maxVal= max;
        validBST = valid;
    }

};

void levelOt(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp ==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }else{
             cout << temp-> data <<" " ;
        if(temp-> left){
            q.push(temp-> left);

        }
        if(temp-> right){
            q.push(temp -> right);
        }

        }
    
       
    }
}
Node* insertIntoBST(Node* root, int data){
    if(root ==NULL){
        //this is the first node
        root = new Node(data);
        return root;
    }
    if(root-> data > data){
        //insert in left
        root-> left = insertIntoBST(root-> left, data);

    }
    else{
        root-> right = insertIntoBST(root-> right, data);
    }
}

void takeInput(Node* &root){
    int data;
    cin>> data;
    while(data !=-1){
        root = insertIntoBST(root, data);
        cin>> data;
    }
}
bool targetpresent(Node* root , int target){
    if(root ==NULL){
        return false;
    }
    if(root-> data == target){
        return true;
    }
    else if(target > root-> data ){
       return targetpresent(root-> right, target);
    }
    else{
       return targetpresent(root-> left, target);
    }
}

int minNode(Node* root){
    Node* temp = root;
    if(root==NULL){
        return -1;
    }
    while(temp-> left !=NULL){
        temp = temp-> left;
    }
    return temp-> data;
}
int maxNode(Node* root){
    Node* temp = root;
    if(root==NULL){
        return -1;
    }
    while(temp-> right !=NULL){
        temp = temp-> right;
    }
    return temp-> data;
}

Node* BSTusingIn(int inorder[] , int s, int e){
    if (s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);
    root-> left = BSTusingIn(inorder, s, mid-1);
    root-> right = BSTusingIn(inorder, mid+1, e);
    return root;
}
void convertIntoSortedDll(Node* root, Node* &head){
    if(root==NULL){
        return;
    }
    convertIntoSortedDll(root-> right, head);
    //attach root node
    root-> right = head;
    if(head!=NULL){
        head-> left = root;

    }
    head = root;
    convertIntoSortedDll(root-> left, head);


}
void printLinkedList(Node* head){
    Node* temp = head;
    cout << endl;
    while(temp!=NULL){
        cout << temp-> data <<" ";
        temp = temp-> right;

    }
    cout << endl;
}
Node* sortedintoBST(Node* &head, int n){
    if(n<=0 || head==NULL){
        return NULL;

    }
    Node* leftTree = sortedintoBST(head, n-1-n/2);
    Node* root = head;
    root-> left = leftTree;
    head = head-> right;

    Node* rightTree = sortedintoBST(head, n/2);
    return root;
}
NodeData findLargest(Node* root, int &ans){
    if(root==NULL){
        NodeData temp = new NodeData(0,INT_MIN,INT_MAX, true );
        return temp;

        
    }


}
int main(){
    
   int inorder[] = {1,2,3,4,5,6,7,8,9};
   int s = 0;
   int e = 8;
   Node* root = BSTusingIn(inorder, s,e);
   levelOt(root);
   Node* head = NULL;
   convertIntoSortedDll(root, head);
   printLinkedList(head);
   Node* root1 = NULL;
   
   root1 = sortedintoBST(head, 8);
   levelOt(root1);

}