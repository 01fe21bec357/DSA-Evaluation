#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

int max(int a, int b) {
    return (a > b) ? a : b;
}

int getHeight(struct Node *node) {
    if (node == NULL)
        return 0;
    return max(getHeight(node->left), getHeight(node->right)) + 1;
}

int getBalance(struct Node *node) {
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insert(struct Node *node, int data) {
    if (node == NULL)
        return createNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

void inorderTraversal(struct Node *node) {
    if (node != NULL) {
        inorderTraversal(node->left);
        printf("%d ", node->data);
        inorderTraversal(node->right);
    }
}

int isAVLTree(struct Node *node) {
    if (node == NULL)
        return 1;

    int balance = getBalance(node);

    if (balance > 1 || balance < -1)
        return 0;

    return isAVLTree(node->left) && isAVLTree(node->right);
}

int main() {
    struct Node *root = NULL;
    int choice, data;

    printf("Enter the elements of the tree (-1 to stop):\n");
    while (1) {
        scanf("%d", &data);
        if (data == -1)
            break;
        root = insert(root, data);
    }

    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    if (isAVLTree(root))
        printf("The given tree is an AVL tree.\n");
    else
        printf("The given tree is not an AVL tree.\n");

    return 0;
}

