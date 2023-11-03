#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is empty (NULL).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	size_t left_height = binary_tree_height(tree->left) + 1;
	size_t right_height = binary_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}
