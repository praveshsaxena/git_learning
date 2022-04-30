#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;


void print(BinaryTreeNode<int>* root){

    if(root==NULL)
    return;
    cout<<root->data;
    if(root->left->data!=NULL){
        cout<<" : L "<<root->left->data<<" ";
    }
    if(root->right->data!=NULL){
        cout<<" : R "<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}


int main(){

    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* root1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* root2=new BinaryTreeNode<int>(3);

    root->left=root1;
    root->right=root2;

    print(root);
    delete root;

}