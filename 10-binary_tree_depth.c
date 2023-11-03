#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);

	return (0);
}
