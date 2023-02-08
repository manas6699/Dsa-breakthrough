// #include <bits/stdc++.h>
// using namespace std;
// template <typename T>
// class binary_tree_node
// {
// public:
//     T data;
//     binary_tree_node *left;
//     binary_tree_node *right;

//     binary_tree_node(T data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }

//     ~binary_tree_node()
//     {
//         delete left;
//         delete right;
//     }
// };

// binary_tree_node<int> *take_input_levelwise()
// {
//     int root_data;
//     cout << "Enter root & corrosponding left & righ data simultaneously : ";
//     cin >> root_data;

//     if (root_data == -1)
//     {
//         return NULL;
//     }

//     binary_tree_node<int> *root = new binary_tree_node<int>(root_data);
//     queue<binary_tree_node<int> *> pending_nodes;
//     pending_nodes.push(root);
//     while (pending_nodes.size() != 0)
//     {
//         binary_tree_node<int> *front = pending_nodes.front();
//         pending_nodes.pop();

//         int left_child;
//         // cout << "Enter left child of " << front->data << " : ";
//         cin >> left_child;
//         if (left_child != -1)
//         {
//             binary_tree_node<int> *child = new binary_tree_node<int>(left_child);
//             front->left = child;
//             pending_nodes.push(child);
//         }
//         int right_child;
//         // cout << "Enter right child of " << front->data << " : ";
//         cin >> right_child;
//         if (right_child != -1)
//         {
//             binary_tree_node<int> *child = new binary_tree_node<int>(right_child);
//             front->right = child;
//             pending_nodes.push(child);
//         }
//     }

//     return root;
// }

// void print_levelwise(binary_tree_node<int> *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     queue<binary_tree_node<int> *> pintu;
//     pintu.push(root);
//     while (pintu.size() != 0)
//     {
//         binary_tree_node<int> *bk = pintu.front();
//         pintu.pop();
//         cout << bk->data << " : ";
//         if (bk->left != NULL)
//         {
//             cout << "L" << bk->left->data << " ";
//             pintu.push(bk->left);
//         }
//         if (bk->right != NULL)
//         {
//             cout << "R" << bk->right->data << " ";
//             pintu.push(bk->right);
//         }

//         cout << endl;
//     }
// }

// //      1 2 -1 -1 3 -1 -1
// //      1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
// //      8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

// binary_tree_node<int> *build_helper(int *in, int *pre, int inS, int inE, int preS, int preE)
// {
//     if (inS > inE)
//     {
//         return NULL;
//     }
//     int root_data = pre[preS];
//     int root_index = -1;
//     for (int i = inS; i <= inE; i++)
//     {
//         if (in[i] == root_data)
//         {
//             root_index = i;
//             break;
//         }
//     }
//     int linS = inS;
//     int linE = root_index - 1;
//     int lpreS = preS + 1;
//     int lpreE = linE - linS + lpreS;
//     int rpreS = lpreE + 1;
//     int rpreE = preE;
//     int rinS = root_index + 1;
//     int rinE = inE;

//     binary_tree_node<int> *root = new binary_tree_node<int>(root_data);

//     root->right = build_helper(in, pre, rinS, rinE, rpreS, rpreE);
//     root->left = build_helper(in, pre, linS, linE, lpreS, lpreE);

//     return root;
// }
// binary_tree_node<int> *build_tree(int *in, int *pre, int size)
// {
//     return build_helper(in, pre, 0, size - 1, 0, size - 1);
// }

// int main()
// {
//     int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
//     int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};

//     binary_tree_node<int> *p1 = build_tree(in, pre, 9);

//     print_levelwise(p1);
//     return 0;
// }







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

//      1 2 -1 -1 3 -1 -1
//      1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
//      8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

binary_tree_node<int> *build_helper(int *in, int *pre, int inS, int inE, int preS, int preE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int root_data = pre[preS];
    int root_index = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (in[i] == root_data)
        {
            root_index = i;
            break;
        }
    }
    int linS = inS;
    int linE = root_index - 1;
    int lpreS = preS + 1;
    int lpreE = linE - linS + lpreS;
    int rpreS = lpreE + 1;
    int rpreE = preE;
    int rinS = root_index + 1;
    int rinE = inE;

    binary_tree_node<int> *root = new binary_tree_node<int>(root_data);

    root->right = build_helper(in, pre, rinS, rinE, rpreS, rpreE);
    root->left = build_helper(in, pre, linS, linE, lpreS, lpreE);

    return root;
}
binary_tree_node<int> *build_tree(int *in, int *pre, int size)
{
    return build_helper(in, pre, 0, size - 1, 0, size - 1);
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int in[n];
    cout << "Enter 1st array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    int pre[n];
    cout << "Enter 2nd array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }

    //      4 2 5 1 8 6 9 3 7
    //      1 2 4 5 3 6 8 9 7


    // int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
    // int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};

    binary_tree_node<int> *p1 = build_tree(in, pre, n);

    print_levelwise(p1);
    return 0;
}
