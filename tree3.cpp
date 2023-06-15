#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node*right;
    Node(int data){
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
    }
};

int findPosition(int arr[] , int n , int element){
    for(int i =0;i<n;i++){
        if(arr[i] == element){
            return i;
        }


    }
    return -1; 
}

Node* buildTreePre(int inorder[] , int preorder[], int n, int &preindex, int starrinOrder, int endinOrder){
    if(preindex >= n || starrinOrder> endinOrder){
        return NULL;
    }
    int element = preorder[preindex++];
    Node* root = new Node(element);
    int pos = findPosition(inorder, n, element);
    root-> left = buildTreePre(inorder, preorder, n, preindex, starrinOrder, pos-1 );
    root-> right = buildTreePre(inorder, preorder, n, preindex, pos+1, endinOrder);
    return root;


}
void lOt(Node* root){
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
int main(){
    int inorder[] = {40,20,50,10,60,30,70};
    int preorder[] = {10,20,40,50,30,60,70};
    int n = 7;
    int preindex = 0;
    int startinOrder = 0;
    int endinOrder = n-1;
    Node* root = buildTreePre(inorder, preorder, n, preindex, startinOrder, endinOrder);
    cout << "Printing tree using LOT " << endl;
    lOt(root);
    return 0;

}