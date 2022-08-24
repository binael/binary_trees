#include "binary_trees.h"

/**
* binary_tree_postorder - in-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function call for each node
*
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
