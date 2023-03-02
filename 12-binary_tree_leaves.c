#include "binary_trees.h"

/**
 * binary_tree_leaves - finds leaves in the tree
 * @tree: the root node of the tree
 *
 * Return: number of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
