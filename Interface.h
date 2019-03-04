
#ifndef Interface_Header
#define Interface_Header

#include <iostream>
#include <cstdlib>
using namespace std;

class BST{
    private:

        struct node
        {
            /* data */
            int key;
            node* left;
            node* right;
        };
        
        node* root;

    public:
    
        void tstPrint();
        BST();
        node* CreateLeaf(int key);

};
#endif