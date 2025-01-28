#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    Node *left,*right;
    Node(int val){ //create constructer
        data = val;
        left = NULL;
        right = NULL;
    }
}bst;

//insert value in bst also create new node
bst *insertInBst(bst *root, int val){
    if(root == NULL){
        return new bst(val); //create new node
    }
    if(val < root->data){
        root->left = insertInBst(root->left, val);
    }else{
        root->right = insertInBst(root->right, val);
    }
    return root;
}

//inorder prints in Ascending order: [1, 2, 3, 4, 5]
void inOrder(bst *root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<< root->data <<' ';
    inOrder(root->right);
}

//search in bst
bst *searchInBst(bst *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return searchInBst(root->left, key);
    }else{
        return searchInBst(root->right, key);
    }
}



int main(){
    bst *root = NULL;
    //5,1,3,4,2,7
    root = insertInBst(root, 5);
    root = insertInBst(root, 1);
    root = insertInBst(root, 3);
    root = insertInBst(root, 4);
    root = insertInBst(root, 2);
    root = insertInBst(root, 7);

    cout << "Ascending order / Inorder : ";
    inOrder(root);
    int numTofind;
    cout<< "\nEnter the number you want to search in the BST : ";
    cin>> numTofind;
    if(searchInBst(root, numTofind)==NULL){
        cout << "The number does'nt exist\n";
    }else{
        cout << "The number exists\n";
    }


    return 0;
}