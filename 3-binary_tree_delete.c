#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: Pointer to the root node of the tree to del
 *
 * Return: 0 if tree is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
