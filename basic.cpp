#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data); 
    
    if(data == -1){
        return NULL;
    }

    cout<<"inserting datat to left "<<endl;
    root->left = buildTree(root->left);

    cout<<"inserting to right " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
        else{
            cout<< temp->data << " ";
            if(temp->left){
                q.push(temp -> left);
            }
            if(temp->right){
                q.push(temp -> right);
            }
        }
    }
}

void inOrder(node* root){

    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<< " ";
    inOrder(root->right);
}

void preOrder(node* root){

    if(root == NULL){
        return ;
    }

    cout<<root->data<< " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){

    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<< " ";
}


int main(){
    node* root = NULL;

    //3 4 6 -1 -1 7 -1 -1 5 8 -1 -1 -1
    root = buildTree(root);
    levelOrderTraversal(root);

    cout<<"inOrder traversal is:  ";
    inOrder(root);
    cout<<endl<<"preOrder traversal is:  ";
    preOrder(root);
    cout<<endl<<"postOrder traversal is:  ";
    postOrder(root);
}