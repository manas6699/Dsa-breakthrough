#include <bits/stdc++.h>
using namespace std;
template <typename T>
class binary_tree_node
{
public:
    T data;
    binary_tree_node *left;
    binary_tree_node *right;

    binary_tree_node(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~binary_tree_node()
    {
        delete left;
        delete right;
    }
};

binary_tree_node<int> *take_input_levelwise()
{
    int root_data;
    cout << "Enter root & corrosponding left & righ data simultaneously : ";
    cin >> root_data;

    if (root_data == -1)
    {
        return NULL;
    }

    binary_tree_node<int> *root = new binary_tree_node<int>(root_data);
    queue<binary_tree_node<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        binary_tree_node<int> *front = pending_nodes.front();
        pending_nodes.pop();

        int left_child;
        // cout << "Enter left child of " << front->data << " : ";
        cin >> left_child;
        if (left_child != -1)
        {
            binary_tree_node<int> *child = new binary_tree_node<int>(left_child);
            front->left = child;
            pending_nodes.push(child);
        }
        int right_child;
        // cout << "Enter right child of " << front->data << " : ";
        cin >> right_child;
        if (right_child != -1)
        {
            binary_tree_node<int> *child = new binary_tree_node<int>(right_child);
            front->right = child;
            pending_nodes.push(child);
        }
    }

    return root;
}

void print_levelwise(binary_tree_node<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<binary_tree_node<int> *> pintu;
    pintu.push(root);
    while (pintu.size() != 0)
    {
        binary_tree_node<int> *bk = pintu.front();
        pintu.pop();
        cout << bk->data << " : ";
        if (bk->left != NULL)
        {
            cout << "L" << bk->left->data << " ";
            pintu.push(bk->left);
        }
        if (bk->right != NULL)
        {
            cout << "R" << bk->right->data << " ";
            pintu.push(bk->right);
        }

        cout << endl;
    }
}

void level_order_traversal(binary_tree_node<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<binary_tree_node<int> *> q1;
    q1.push(root);
    
    while (q1.size() != 0)
    {
        
        binary_tree_node<int> *current = q1.front();
         if (q1.front()->data != -1)
        {
            cout << current->data << " ";
            cout << endl;
        }
        
        binary_tree_node<int> *test;
        test->left->data = -1;
        test->right->data = -1;
        q1.pop();
        q1.push(test);
        
        

        
       
        if (current->left != NULL && current->left->data != -1)
        {
            q1.push(current->left);
        }
        if (current->right != NULL && current->right->data != -1)
        {
            q1.push(current->right);
        }
        
       
        if (q1.size() == 0)
        {
            break;
        }
        
        
    }
}
//      1 2 -1 -1 3 -1 -1
//      1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
//      8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

int main()
{

    binary_tree_node<int> *p1 = take_input_levelwise();

    print_levelwise(p1);
    cout << "Level order traversal : " << endl;
    level_order_traversal(p1);
    return 0;
}
