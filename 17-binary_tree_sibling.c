#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree.
 * @node: Pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if the node is NULL,
 * the parent is NULL, or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL); /* If the node or its parent is NULL, return NULL */

	binary_tree_t *parent = node->parent;
	if (parent->left == node)
	{
	  /* Return the right child as the sibling if the node is the left child */
		return (parent->right);
	}
	else if (parent->right == node)
	{
	  /* Return the left child as the sibling if the node is the right child */
		return (parent->left);
	}

	return (NULL); /* Return NULL if the node has no sibling (unusual case) */
}
