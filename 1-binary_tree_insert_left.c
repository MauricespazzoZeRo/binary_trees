#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node at the left side of another node.
* @parent: Pointer to the node to insert the left-child in.
* @value: The value to put in the new node.
*
* Return: Pointer to the new node, or NULL on failure or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child_node;

	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new right child node */
	left_child_node = malloc(sizeof(binary_tree_t));
	if (left_child_node == NULL)
		return (NULL);

	/* Set the value, parent, and child pointers */
	left_child_node->n = value;
	left_child_node->parent = parent;
	/* Put left child in 'left' by referring to it's parent who reps the node */
	left_child_node->left = parent->left;
	left_child_node->right = NULL;

	/* Update the parent's left-child if it exists */
	if (parent->left != NULL)
	{
		parent->left->parent = left_child_node;
	}
	/* Set old left child node as left child of new node */
	parent->left = left_child_node;

	return (left_child_node);
}
