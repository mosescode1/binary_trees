#include "binary_trees.h"

/**
 * binary_tree_height -  height of a binary tree.
 * @tree: node of the tree to measure the height.
 *
 * Return: the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft_height, rgt_height;

	if (tree == NULL)
		return (0);

	lft_height = binary_tree_height(tree->left);
	rgt_height = binary_tree_height(tree->right);

	return (1 + (lft_height > rgt_height ? lft_height : rgt_height));
}

/**
 * binary_tree_balance - balance factor of a binary tree.
 * @tree: root node of the tree to measure the balance factor.
 *
 * Return: the tree, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
