#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node at the right side of another node.
* @parent: Pointer to the node to insert the right-child in.
* @value: The value to put in the new node.
*
* Return: Pointer to the new node, or NULL on failure or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
	binary_tree_t *right_child_node;

	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new right child node */
	right_child_node = malloc(sizeof(binary_tree_t));
	if (right_child_node == NULL)
		return (NULL);

	/* Set the value, parent, and child pointers */
	right_child_node->n = value;
	right_child_node->parent = parent;
	right_child_node->left = NULL;
	/* Put right child in right by referring to it's parent who reps the node */
	right_child_node->right = parent->right;

	/* Update the parent's right-child if it exists */
	if (parent->right != NULL)
	{
		parent->right->parent = right_child_node;
	}
	/* Set old right child node as right child of new node */
	parent->right = right_child_node;

	return (right_child_node);
}
