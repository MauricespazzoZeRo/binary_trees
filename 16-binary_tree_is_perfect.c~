#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is empty (NULL).
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 1;  /* Leaf node */

	if (tree->left == NULL || tree->right == NULL)
		return 0;  /* Not perfect (missing child) */

	/* Recursively check the left and right subtrees */
	if (!binary_tree_is_perfect(tree->left) || !binary_tree_is_perfect(tree->right))
		return 0;  /* Subtrees are not perfect */

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth == right_depth)
		return 1;  /* Left and right subtrees have the same depth */

	return 0;  /* Left and right subtrees have different depths */
}

/**
 * binary_tree_depth - Calculate the depth of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The depth of the tree, or 0 if the tree is empty (NULL).
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return depth;
}
