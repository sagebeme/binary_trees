#include "binary_trees.h"

/**
 * binary_tree_nodes - finds nodes
 * @tree: the root node
 *
 * Return: return number of nodes with at least one node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: the root/parent node
 *
 * Return: number of nodes in a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_leaves - returns the number of leaves
 * @tree: the root node
 *
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
