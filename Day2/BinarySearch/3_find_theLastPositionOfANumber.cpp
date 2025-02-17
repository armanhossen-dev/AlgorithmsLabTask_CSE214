/*
Find the Last Position of a Number
Find the last position of a specific number 
in a sorted array. Return -1 if the number is not found.

*/
#include<iostream>
using namespace std;
//to find the how many times a number is in the stored memory, and form that count i can find the last position
#define size 6
int p = 0;

typedef struct node{
    int data;
    int pos;
    int count;
    struct node *left, *right;
    node(int num){
        data = num;
        ++p;
        pos = p;
        count = 1;
        left = NULL;
        right = NULL;
    }
}bst;

bst *add(bst *root, int val){
     
     if(root == NULL){
        return new bst(val);
     }
     if(val == root->data){
      root->count++;
     }
     if(val < root->data){
     //else if(val <= root->data){
        root->left = add(root->left, val);
     }else{
        root->right = add(root->right, val);
     }
}


void inorder(bst *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << "data: " << root->data << '\n'
         << "position: " << root->pos << '\n'
         << "count: " << root->count << '\n' << '\n';
    /*
    Enter six number to the bst: 1 1 20 20 20 20 
    Printing inorder :
    data: 1
    position: 2
    count: 1

    data: 1
    position: 1
    count: 2

    data: 20
    position: 6
    count: 1

    data: 20
    position: 5
    count: 2

    data: 20
    position: 4
    count: 3

    data: 20
    position: 3
    count: 4
    */
    inorder(root->right);
}

//inorder to find or count target num how many time 
int Tcount = 0;
int cTarget(bst *root, int val){
    if(root == NULL){
        return Tcount;
    }
    cTarget(root->left,val);
    if(root->data == val){
        Tcount++;
    }
    cTarget(root->right,val);
}

/**
bst *search(bst *root, int val){
    if(root == NULL){
        return NULL;
    }
    if(root->num == val){
        return root;
    }
    if(val < root->num ){
        return search(root->left, val);
    }else{
    //if(val > root->num ){
        return search(root->right, val);
    }
}
*/

bst *targetPosition(bst *root, int countNum){
    if(root == NULL){
        return NULL;
    }
    if(countNum == root->count){
        return root;
    }
    if(countNum < root->count){
        return targetPosition(root->left, countNum);
    }else{
        return targetPosition(root->right,countNum);
    }
}

int main(){
    bst *root = NULL;
    int num;
    cout << "Enter six number to the bst:\n";
    for(int i = 0; i < size; i++){
        cin >>num;
        root = add(root, num);
    }
    //cout << "Printing inorder :\n";  //inorder(root);
    //now for a specific number i have to compaire its highest count 
    
    int fn, howManyTimes = 0;
    cout << "Enter the number which last position you want to know: ";
    cin >> fn;
    howManyTimes = cTarget(root, fn);
    //cout << "howManyTimes: " << howManyTimes; worked wow
    bst *temp = targetPosition(root, howManyTimes);
    //traverse 1 time to get how many number ther is with the target value,
    //let count , then matching the count i will find the last number with position wow
    if(temp == NULL){
        cout << "not found\n";
    }else{
        cout << "temp->count: "<<temp->count <<'\n'
             << "temp->pos: " << temp->pos <<endl;
    }
    //inorder(root);
    return 0;
}