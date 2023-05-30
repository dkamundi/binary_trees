#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

typedef struct binary_tree {
    int value;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

void binary_tree_print(const binary_tree_t *);
typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s bst_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif