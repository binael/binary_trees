#include "binary_trees.h"

/**
* binary_tree_levelorder - function that goes through a binary tree using level-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*
* Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree && func)
	{
		height = (int)tree_height(tree);

		for (i = 0; i < height; i++)
		{
			level_order(tree, func, i);
		}
	}
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
* level_order - function to determine the level order
* @tree: pointer to the root node of the tree to transverse
* @func: function pointer
* @level: the level to print:
*/
void level_order(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (level == 0)
	{
		func(tree->n);
	}
	else if (level > 0)
	{
		level_order(tree->left, func, level - 1);
		level_order(tree->right, func, level - 1);
	}
}
