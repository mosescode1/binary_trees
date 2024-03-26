#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * @parent: parent node of the node to be created
 * @value: new node to be created
 * Return: addreess of the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
