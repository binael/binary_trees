#include "binary_trees"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: the node to measure from
*
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (!tree || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_node = binary_tree_height(tree->left) + 1;
	right_node = binary_tree_height(tree->right) + 1;

	if (left_node >= right_node)
	{
		return (left_node);
	}
	else
	{
		return (right_node);
	}
}
