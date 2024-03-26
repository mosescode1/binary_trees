#include "binary_trees.h"
/**
 * binary_tree_is_root - node is a root
 * @node: node to check
 * Return: An integer, 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
