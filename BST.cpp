#include "header.h"
#define COUNT 10

bool header::insert(Elem *& root, const KEY &key, const T &data, Elem *lastLeft){
    struct node *tempNode = (struct node*) malloc(sizeof(struct node));
    tempNode->data = data;
            if(root==NULL) 
            {
                root = data;
            }
            else
                {
                    if (p->rightThread) 
                        break;
                    p = p->*_root::right;
                } 
                else if (p->key > key) 
                {
                    if (p->leftThread) 
                        break;
                    p = p->left;
                }
                else 
                {
                    /* redundant key */
                    return; 
                }
            }
            Node *tmp = new Node();
            tmp->key = key;
            tmp->rightThread = tmp->leftThread = true;
            if (p->key < key) 
            { 
                /* insert to right side */
                tmp->right = p->right;
                tmp->left = p;
                p->right = tmp;
                p->rightThread = false;
            }
            else
            {
               return;
            }

}

void header::printTree(ostream& out, int level, Elem *root){
    if (root == NULL){
        return;  
    }
    // Increase distance between levels  
    level += COUNT;  
  
    // Process right child first  
    printTree(out,root->right, level);  
  
    // Print current node after space  
    // count  
    cout<<endl;  
    for (int i = COUNT; i < level; i++)  
        out<<" ";  
    out<<root->data<<"\n";  
  
}

void header::destructCode(Elem *& p){
    while(p != NULL)
    {
        Node *temp = p;

        if(p->child != NULL)
        {
            p = p->child;
            temp->child = p->next;
            p->next = temp;
        }
        else
        {
            p = p->next;
            remove(temp);
        }
    }
}

int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct Elem* root = NULL; 
    struct node *tempNode = (struct node*) malloc(sizeof(struct node));
    tempNode->data = data;
    struct Elem* lastLeft=NULL
    root = *_root.insert(root, 50,data,lastLeft);
    insert(root, 30,data,lastLeft); 
    insert(root, 20,data,lastLeft); 
    insert(root, 40,data,lastLeft); 
    insert(root, 70,data,lastLeft); 
    insert(root, 60,data,lastLeft); 
    insert(root, 80,data,lastLeft); 

    return 0;

}