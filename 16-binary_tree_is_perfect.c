#include "binary_trees.h"

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if perfect, 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int num_nodes, height;

	if (tree == NULL)
	{
		return (0);
	}

	num_nodes = number_of_nodes(tree);
	height = (int)tree_height(tree);

	if (num_nodes % 2 == 0)
	{
		return (0);
	}

	if (exponent(2, height) == num_nodes + 1)
	{
		return (1);
	}
	return (0);
}


/**
* number_of_nodes - gets the total number of nodes
* @tree: pointer to the root node of the tree to check
*
* Return: number of nodes
*/
int number_of_nodes(const binary_tree_t *tree)
{
	int total;

	if (tree == NULL)
	{
		return (0);
	}
	total = number_of_nodes(tree->left) + number_of_nodes(tree->right) + 1;

	return (total);
}


/**
* tree_height - function that measures the height of a binary tree
* @tree: the node to measure from
*
* Return: height
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL)
	{
		return (0);
	}
	left_node = tree_height(tree->left) + 1;
	right_node = tree_height(tree->right) + 1;

	if (left_node >= right_node)
	{
		return (left_node);
	}
	else
	{
		return (right_node);
	}
}


/**
* exponent - exponent function
* @base: integer base
* @power: integer power
*
* Return: integer result
*/
int exponent(int base, int power)
{
	int i, result = base;

	for (i = power; i > 1; i--)
	{
		result = result * base;
	}

	return (result);
}
