#include "binary_trees.h"



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }
    
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    
    if (parent != NULL) {
        if (parent->left == NULL) {
            parent->left = new_node;
        } else if (parent->right == NULL) {
            parent->right = new_node;
        }
    }
    
    return new_node;
}
