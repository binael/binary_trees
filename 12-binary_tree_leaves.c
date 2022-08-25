#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: the node to count the number of leaves
*
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree && tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	num = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 0;

	return (num);
}
