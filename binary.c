#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the binary tree
struct Node
 {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int value)
 {
    struct Node* node;
    node =(struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
 }

// In-order Traversal (Left, Root, Right)
void inorder(struct Node* root) 
{
    if (root != NULL)
     {
        inorder(root->left);  // Visit left subtree
        printf("%d ", root->data);  // Visit node
        inorder(root->right);  // Visit right subtree
     }
}

// Insert a new node into the binary tree
struct Node* insert(struct Node* root, int data) 
{
    if (root == NULL) 
    {
        return newNode(data);
    }

    if (data < root->data)
     {
        root->left = insert(root->left, data);  
     }
      else if (data > root->data) 
     {
        root->right = insert(root->right, data);  
     }

    return root;
}

// Search for a node in the binary tree
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
     {
        return root;
     }

    if (key < root->data) 
    {
        return search(root->left, key);  // Search in the left subtree
    } 
    else
     {
        return search(root->right, key);  // Search in the right subtree
     }
}

// Find the node with the minimum value (for deletion)
struct Node* minValueNode(struct Node* node) 
{
    struct Node* current = node;

    // Loop down to find the leftmost leaf
    while (current && current->left != NULL) 
    {
        current = current->left;
    }

    return current;
}

// Delete a node from the binary tree
struct Node* deleteNode(struct Node* root, int key) 
{
    if (root == NULL) 
    {
        return root;
    }

    // Traverse the tree to find the node to delete
    if (key < root->data) 
    {
        root->left = deleteNode(root->left, key);  // Go to left subtree
    } 
    else
     if (key > root->data) 
    {
        root->right = deleteNode(root->right, key);  // Go to right subtree
    }
     else
      {
        // Node to be deleted found

        // Case 1: Node has only one child or no child
        if (root->left == NULL) 
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
         else
          if (root->right == NULL) 
          {
            struct Node* temp = root->left;
            free(root);
            return temp;
          }

        // Case 2: Node has two children
        struct Node* temp = minValueNode(root->right);  // Get the inorder successor
        root->data = temp->data;  // Copy the inorder successor's data to this node
        root->right = deleteNode(root->right, temp->data);  // Delete the inorder successor
    }

    return root;
}

// Update a node's value
void update(struct Node* root, int oldVal, int newVal) 
{
    struct Node* node = search(root, oldVal);
    if (node != NULL) 
    {
        node->data = newVal;
        printf("Node updated from %d to %d.\n", oldVal, newVal);
    }
     else 
     {
        printf("Node with value %d not found.\n", oldVal);
    }
}

void main()
 {
    struct Node* root = NULL;

    
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

    // Searching for a value in the tree
    int searchVal = 40;
    struct Node* foundNode = search(root, searchVal);
    if (foundNode != NULL) {
        printf("Node with value %d found.\n", foundNode->data);
    } else {
        printf("Node with value %d not found.\n", searchVal);
    }

    // Deleting a node
    root = deleteNode(root, 20);
    printf("In-order traversal after deleting 20: ");
    inorder(root);
    printf("\n");

    // Updating a node's value
    update(root, 30, 35);
    printf("In-order traversal after updating 30 to 35: ");
    inorder(root);
    printf("\n");

}
