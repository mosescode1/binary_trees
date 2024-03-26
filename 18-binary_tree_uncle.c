#include "binary_trees.h"

/**
 * binary_tree_uncle -  a binary tree.
 * @node: node to find the uncle.
 *
 * Return: uncle node, or NULL if no uncle or if node is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
