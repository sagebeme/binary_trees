#include "binary_trees.h"

/**
 *
 *  binary_trees_node function that creates the binary tree node
 *  @parent a pointer to the parent node/the root node
 *  @value value to put in the new node
 *
 *  return: return a pointer to the created node, or null on failure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);
    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return(new);
}