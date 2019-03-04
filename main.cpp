#include "Interface.h"

int main(){
    BST obj;

    obj.tstPrint();
    return 0;
}

void BST::tstPrint()
{cout << " Hello world " << endl;}

BST::BST(){
    root = nullptr;
}

//node pointer, defined in constructor
BST::node* BST::CreateLeaf(int key){ node* n = new node;
    n->key = key;
    n->left = nullptr;
    n->right = nullptr;
    return n; }