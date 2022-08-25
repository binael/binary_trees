#include "binary_trees.h"

/**
 * binary_tree_uncle - the sibling of a binary tree node
 * @node: the pointer to the node in consideration
 *
 * Return: The sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *papa;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	papa = node->parent;
	grand_parent = node->parent->parent;

	if (grand_parent->left == papa)
	{
		if (grand_parent->right)
		{
			return (grand_parent->right);
		}
	}
	else if (grand_parent->right == papa)
	{
		if (grand_parent->left)
		{
			return (grand_parent->left);
		}
	}

	return (NULL);
}
