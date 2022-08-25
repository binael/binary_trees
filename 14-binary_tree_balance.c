#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: the node to measure the balance factor
*
* Return: integer balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree == NULL)
	{
		return (0);
	}
	left_node = child_node_height(tree->left);
	right_node = child_node_height(tree->right);

	return (left_node - right_node);
}


/**
* child_node_height - function that measures the height of a binary tree
* @tree: the node to measure from
*
* Return: height
*/
size_t child_node_height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL)
	{
		return (0);
	}
	left_node = child_node_height(tree->left) + 1;
	right_node = child_node_height(tree->right) + 1;

	if (left_node >= right_node)
	{
		return (left_node);
	}
	else
	{
		return (right_node);
	}
}
