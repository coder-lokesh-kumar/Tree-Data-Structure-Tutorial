#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* left = NULL;
    node* right = NULL;

    node(int data){
        this->data = data;
    }
};

//Preorder Traversal : First we vist root, then left subtree and then right subtree.

void preorderTraversal(node* root){
    if(root == NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

/*
         5
       /  \
     10    7
     /\   / \
   12 13 15 20
*/
int main(){
    
    //Construction of  above shown tree
    node* root = new node(5);
    node*c1 = new node(10);
    node*c2 = new node(7);

    node* c11 = new node(12);
    node* c12 = new node(13);

    node* c21 = new node(15);
    node* c22 = new node(20);

    root->left = c1;
    root->right = c2;

    c1->left = c11;
    c1->right = c12;

    c2->left = c21;
    c2->right = c22;

    cout<<"Preorder Traversal of given tree : "<<endl;
    preorderTraversal(root);
    cout<<endl;

    return 0;
}