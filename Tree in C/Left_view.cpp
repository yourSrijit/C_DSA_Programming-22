#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node* right;
    Node(int d){
      data=d;
      left=NULL;
      right =NULL;
    }
};

void LeftView(Node *root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node * cur=q.front();
            q.pop();
            if(i==0){
                cout<<cur->data<<" ";
            }
            if(cur->left!=NULL){
                q.push(cur->left);
            }
             if(cur->right!=NULL){
                q.push(cur->right);
            
        }
    }
 }
}
int main(){
    Node *root =new Node(5);
    root->left=new Node(3);
    root->right =new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);

    LeftView(root);
    return 0;
    
}
