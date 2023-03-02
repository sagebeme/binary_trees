#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse binary tree post order
 * @tree: pointer to the root of the tree to traverse
 * @func: pointer to the function to call each node
 *
 * Return: 0 or Null
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
