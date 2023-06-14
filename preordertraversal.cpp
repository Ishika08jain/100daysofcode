#include <iostream>
#include <queue>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this-> data = data;
        left = NULL;
        right = NULL;
    }


}; 
Node* buildTree(){
    int data;
    cout<< "Enter the data" << endl;
    cin>> data;

    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    cout << "Enter data for left part " << endl;

    root -> left = buildTree();
    cout << "Enter data for right part " << endl;

    root -> right = buildTree();
    return root;
}

void lOt(Node* root){
    queue <Node*> q;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout << temp-> data <<" "; 
        if(temp-> left){
            q.push(temp-> left);

        }
        if(temp-> right){
            q.push(temp -> right);
        }
    }
    }




}
void preOrder(Node* root){
    if(root == NULL){
        return;

    }
    cout << root-> data << " ";
    preOrder(root-> left);
    
    preOrder(root-> right);
}
int main(){
    Node* root;
    root = buildTree();
    lOt(root);
     
    return 0;

}