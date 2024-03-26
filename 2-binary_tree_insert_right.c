#include "binary_trees.h"

/**
 * binary_tree_insert_right - right-child of another node.
 * @parent: node to insert the right-child in.
 * @value: Store in the new node.
 *
 * Return: NULL on failure or if parent, NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);

	if (node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}

