#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of non-leaf nodes in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The number of non-leaf nodes, or 0 if the tree is empty (NULL).
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}
