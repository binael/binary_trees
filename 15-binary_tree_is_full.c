#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if full or complete, 0 if not complete
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check, control = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right != NULL)
		{
			return (0);
		}
		if (tree->left != NULL && tree->right == NULL)
		{
			return (0);
		}
		if (tree == NULL)
		{
			return (1);
		}

		check = 1 * binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right);
	}

	if (!check)
	{
		check = control;
	}
	return (check);
}
