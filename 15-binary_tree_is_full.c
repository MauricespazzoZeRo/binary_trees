#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise or if the tree is empty (NULL).
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has exactly 2 children */
	if (tree->left != NULL && tree->right != NULL)
	{
		/* recursively check both sub-nodes or sub-trees */
		all = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

		return (all);
	}

	return (0);
}
