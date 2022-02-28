// // Exercise: Trees-1 (TDRK12 Spring 2022)
// // Task 9. Write program to perform deletion of an element in a binary search tree. The value of an element is to be entered in a console window. To check that it works, add the code from (1)–(3).

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *tree;

// struct node *create_tree(struct node *);
// void inorderTraversal(struct node *);
// struct node *insertElement(struct node *, int);
// struct node *deleteElement(struct node *, int);
// struct node *findLargestElement(struct node *);

// int main()
// {
//     int val;
//     tree = create_tree(tree);
//     printf("\n BINARY SEARCH TREE CREATED\n");
//     printf("\n Enter the value of the new node (-1 to end): ");
//     scanf("%d", &val);
//     while (val != -1)
//     {
//         tree = insertElement(tree, val);
//         printf("\n Enter the data for a new node (-1 to end) : ");
//         scanf("%d", &val);
//     }
//     printf("\n The elements of the tree are : \n");
//     inorderTraversal(tree);
//     printf("\n");
//     printf("\n Enter the element to be deleted : ");
//     scanf("%d", &val);
//     tree = deleteElement(tree, val);
//     printf("\n The elements of the tree are : \n");
//     inorderTraversal(tree);
//     printf("\n");
//     return 0;
//                 }

// struct node *create_tree(struct node *tree)
// {
//     tree = NULL;
//     return tree;
// }

// void inorderTraversal(struct node *tree)
// {
//     if (tree != NULL)
//     {
//         printf(" ( ");
//         inorderTraversal(tree->left);
//         printf("%d", tree->data);
//         inorderTraversal(tree->right);
//         printf(" ) ");
//     }
// }

// struct node *insertElement(struct node *tree, int val)
// {
//     if (tree == NULL)
//     {
//         struct node *ptr = (struct node *)malloc(sizeof(struct node));
//         ptr->data = val;
//         ptr->left = ptr->right = NULL;
//         tree = ptr;
//     }
//     else
//     {
//         if (val < tree->data)
//             tree->left = insertElement(tree->left, val);
//         else
//             tree->right = insertElement(tree->right, val);
//     }
//     return tree;
// }

// // USE 
// struct node *findLargestElement(struct node *tree)
// {
//     if ((tree == NULL) || (tree->right == NULL))
//         return tree;
//     else
//         return findLargestElement(tree->right);
// }

// // USE
// struct node *deleteElement(struct node *tree, int val)
// {
//     struct node *ptr;

//     if (tree == NULL)
//     {
//         printf("\n VAL not found in the tree \n");
//     }
//     else if (val < tree->data)
//     {
//         tree->left = deleteElement(tree->left, val);
//     }
//     else if (val > tree->data)
//     {
//         tree->right = deleteElement(tree->right, val);
//     }
//     else // val == tree->data
//     {
//         if (tree->left && tree->right)
//         {
//             // Find the in-order predecessor
//             ptr = findLargestElement(tree->left);
//             tree->data = ptr->data;
//             // Delete the node of the in-order predecessor
//             tree->left = deleteElement(tree->left, ptr->data);
//         }
//         else // at least one child is absent
//         {
//             ptr = tree;
//             // no children - return NULL
//             if (tree->left == NULL && tree->right == NULL)
//                 tree = NULL;
//             // if the node has a child (but not both)
//             // it is replaced by the child, which is returned
//             else if (tree->left != NULL)
//                 tree = tree->left;
//             else
//                 tree = tree->right;
//             // Delete the initial node
//             free(ptr);
//         }
//     }
//     return tree;
// }
