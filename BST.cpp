#include<iostream>

using namespace std;

class BST
{
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    node* root;


    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }


    void postorder(node* t)
    {
        if(t == NULL)
            return;
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " ";

    }
void preorder(node* t)
    {
        if(t == NULL)
            return;
        cout << t->data << " ";
        preorder(t->left);
        preorder(t->right);
    }
void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }


public:
    BST()
    {
        root = NULL;
    }


    void insert(int x)
    {
        root = insert(x, root);
    }


    void display()
    {   int y; cout<<"1:Preorder\n2:Postorder\n3:Inorder\n";cin>>y;
        switch(y){
        case 1:preorder(root);cout << endl;break;
        case 2:postorder(root);cout << endl;break;
        case 3:inorder(root);cout << endl;break;
        default:cout<<"INVALID INPUT\n";
        }

    }


};


int main()
{
    BST t;
        int x,ch;
        do{
        cout<<"1:To insert element in tree\n2:To display\nAny other key to exit\n";cin>>ch;
        switch(ch){
        case 1:cout<<"Enter element to insert\n";cin>>x;t.insert(x);break;
        case 2:t.display();break;
        default:return 0;
        }
        }while(1);

        return 0;

}
