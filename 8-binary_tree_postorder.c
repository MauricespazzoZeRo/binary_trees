#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using postorder traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree in postorder, visiting
 * each node and calling the provided function with the node's value as a
 * parameter.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function for the current node's value (traverse root)*/
	func(tree->n);
}
