#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: size_t number of parent nodes;
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	num = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (num);
}
