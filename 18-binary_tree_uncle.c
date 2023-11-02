#include "binary_trees"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree.
 * @node: Pointer to the node for which to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if the node is NULL,
 * the parent is NULL, the grandparent is NULL, or the parent has no sibling.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL); /* If the node, parent, or grandparent is NULL, return NULL */

    binary_tree_t *grandparent = node->parent->parent;

    if (grandparent->left == node->parent && grandparent->right != NULL)
        return grandparent->right; /* Return the right child of the grandparent as the uncle if the parent is the left child */

    if (grandparent->right == node->parent && grandparent->left != NULL)
        return grandparent->left; /* Return the left child of the grandparent as the uncle if the parent is the right child */

    return NULL;
}