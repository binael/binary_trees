#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a tree is a leaf
* @node: tree node to check
*
* Return: 1 if node, 0 if not node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || (node && (node->left || node->right)))
	{
		return (0);
	}
	return (1);
}
