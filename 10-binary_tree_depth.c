#include "binary_trees.h"

/**
 * binary_tree_depth - the depth of the binary tree
 *
 * @tree: root node of the tree to get the depth
 *
 * Return: 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
