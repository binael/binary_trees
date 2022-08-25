#include "binary_trees.h"

/**
 * binary_tree_sibling - the sibling of a binary tree node
 * @node: the pointer to the node in consideration
 *
 * Return: The sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *papa;

	if (node == NULL || node->parent == NULL)
	{
		return (0);
	}

	papa = node->parent;

	if (papa->left == node)
	{
		if (papa->right)
		{
			return (papa->right);
		}
	}
	else if (papa->right == node)
	{
		if (papa->left)
		{
			return (papa->left);
		}
	}

	return (NULL);
}	
