#include "binarytree.h"

Tree::Tree()
{
    root = NULL;
}

Tree::~Tree()
{
    destroy_leaf(root);
}

void Tree::destroy_leaf(node * leaf)
{
    if (leaf != NULL) 
    {
        destroy_leaf(leaf->left);
        destroy_leaf(leaf->right);
    }
}

void Tree::insert(int val)
{
    // public insert function
    insert(val, root);
}
    
void Tree::insert(int val, node * leaf)
{
    // Add a new node to the tree
    if (root == NULL)
    {
        // root node doesn't exist yet
        root = new NODE;
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (val < leaf->data)
        {
            // insert a leaf to the left 
            if (leaf->left != NULL) 
            {
                insert(val, leaf->left);
            }
            else
            {
                leaf->left = new NODE;
                leaf->left->data = val;
                leaf->left->left = NULL;    //Sets the left child of the child node to null
                leaf->left->right = NULL;   //Sets the right child of the child node to null
            }   
        }
        else 
        {
            // insert a leaf to the right 
            if (leaf->right != NULL) 
            {
                insert(val, leaf->right);
            }
            else
            {
                leaf->right = new NODE;
                leaf->right->data = val;
                leaf->right->left = NULL;    //Sets the left child of the child node to null
                leaf->right->right = NULL;   //Sets the right child of the child node to null
            }  
        }
    }
}

bool Tree::search(int val, NODE * leaf)
{
    if (leaf != NULL)
    {
        if (leaf->data == val)
        {
            // found the value in the tree
            return true;
        }
        else if (val < leaf->data)
        {
            search(val, leaf->left);
        }
        else 
        {
            search(val, leaf->right);
        }
    }
    else 
    {
        // value is not in the tree
        return false;
    }
}

bool Tree::search(int val)
{
    // return if a node is in the tree
    return search(val, root);
}

void Tree::printBFS()
{
    /* prints the tree in order from top to bottom using BFS:
     * ex.  3
     *     / \
     *    2   8
     *   /\  /\
     * 1  5 7  9
     *  prints as: 3 28 1579
     */
     
     // use a queue to print the tree 
     queue<NODE*> q;
     q.push(root);
     cout<<endl<<"BFS printout of binary tree: ";
     while (q.size() > 0)
     {
         NODE *n = q.front();
         q.pop();
         // write the value when you dequeue it
         cout<<n->data<<", "; 
         if (n->left != NULL)
         {
            //enqueue the left leaf node
            q.push(n->left);
         }
         if (n->right != NULL)
         {
            //enque the right leaf node
            q.push(n->right);
         }
     }
}
 
void Tree::printDFS()
{
    /* prints the tree in order from top to bottom using DFS:
     * ex.  3
     *     / \
     *    2   8
     *   /\  /\
     * 1  5 7  9
     *  prints as: 3 2 1 5 8 7 9
     */
     // use a stack to print the tree
    stack<NODE*> s;
    s.push(root);

}