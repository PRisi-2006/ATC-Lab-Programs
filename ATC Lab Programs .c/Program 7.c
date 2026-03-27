#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    char data;
    struct node *left, *right;
};

// Create new node
struct node* createNode(char data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder traversal
void inorder(struct node* root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

int main() {
    // Construct AST for: a + b * c
    struct node* root = createNode('+');
    root->left = createNode('a');
    root->right = createNode('*');
    root->right->left = createNode('b');
    root->right->right = createNode('c');

    printf("Inorder Traversal of AST:\n");
    inorder(root);

    return 0;
}