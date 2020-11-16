#include "AVL_header.h"
#define COUNT 10

bool AVL_header::insert(Elem *& root, const KEY &key, const T &data, Elem *lastLeft){
            if(root==NULL) 
            {
                root = tempNode;
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

void AVL_header::printTree(ostream& out, int level, Elem *p) const{
    if (p == NULL){
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
    out<<p->data<<"\n";  
  
}

void destructCode(Elem *& p){
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

int AVL_header::height(Elem *node)
{  
    if (node == NULL)  
        return 0;  
    return node->height;  
}  
  
void AVL_header::updateHeight(Elem*& cur){
    if (cur == NULL)  
        return 0;  
    return cur->height;  
}

void AVL_header:: rotateRight(Elem *& node)  
{  
    Elem *x = node->left;  
    Elem *T2 = x->right;  
  
    // Perform rotation  
    x->right = node;  
    node->left = T2;  
  
    // Update heights  
    node->height = max(height(node->left), 
                    height(node->right)) + 1;  
    x->height = max(height(x->left), 
                    height(x->right)) + 1;  
  
    // Return new root  
    return x;  
}  

void AVL_header::rotateLeft(Elem *& node){
    Node *y = node->right;  
    Node *T2 = y->left;  
  
    // Perform rotation  
    y->left = node;  
    node->right = T2;  
  
    // Update heights  
    node->height = max(height(node->left),     
                    height(node->right)) + 1;  
    y->height = max(height(y->left),  
                    height(y->right)) + 1;  
  
    // Return new root  
    return y;  
}

void AVL_header::doubleRotateRight(Elem *& node){
    struct node *p;
    struct node *tp;
    p = node;
    tp = p->right;

    p->right = tp->left;
    tp->left = p;

    return tp;     
}

void AVL_header::doubleRotateLeft(Elem *& node){
    struct node *p;
    struct node *tp;
    p = node;
    tp = p->left;

    p->left = tp->right;
    tp->right = p;

    return tp; 
}
void AVL_header::balance(Elem*& cur, const KEY &key){
    int lh; /* for height of left subtree */
    int rh; /* for height of right subtree */
   
  
    /* Get the height of left and right sub trees */
    lh = height(cur->left); 
    rh = height(cur->right); 
  
    if (abs(lh - rh) <= 1 && balance(cur->left,cur->left->key) && balance(cur->right,cur->right->key)) 
        return 1; 
  
    /* If we reach here then  
    tree is not height-balanced */
    return 0;   
}  

int AVL_header::balanceFactor(Elem *cur){
    if (cur == NULL)  
        return 0;  
    return height(cur->left) - height(cur->right);  
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