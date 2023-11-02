#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The balance factor of the tree, or 0 if the tree is empty (NULL).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	int balance_factor = left_height - right_height;

	return (balance_factor);
}

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is empty (NULL).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
