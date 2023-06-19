#include <iostream>
#include <queue>
#include <map>

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
    cout << "Enter data for left part " << data << " Node"  << endl;

    root -> left = buildTree();
    cout << "Enter data for right part " <<  data << " Node" << endl;

    root -> right = buildTree();
    return root;
}

void bottomView(Node* root){
    if(root == NULL){
        return;
    }
    map <int, int> topNode;
    queue <pair <Node*, int> > q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        
       topNode[hd] = frontNode-> data;

        
        if(frontNode -> left)
{
    q.push(make_pair(frontNode -> left , hd-1));
}     
 if(frontNode -> right)
{
    q.push(make_pair(frontNode -> right, hd+1));
}       

  }

 

cout << "Printing the tree " << endl;

for(auto i: topNode){
    cout << i.first << "->" << i.second << endl;
}
}

int main(){
    Node* root =buildTree();
    bottomView(root);



    return 0;

}