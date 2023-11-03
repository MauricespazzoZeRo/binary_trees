#include "binary_trees.h"

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
