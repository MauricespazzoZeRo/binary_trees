#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The balance factor of the tree, or 0 if the tree is empty (NULL).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = left_height - right_height;

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

	size_t Lheight;
	size_t Rheight;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		Lheight = binary_tree_height(tree->left) + 1;
		Rheight = binary_tree_height(tree->right) + 1;

		if (Lheight > Rheight)
			return (Lheight);
		else
			return (Rheight);
	}
}
