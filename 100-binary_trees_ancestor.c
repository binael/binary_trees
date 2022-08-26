#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: lowest ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lowest_ancestor;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	lowest_ancestor = ancestor(first, second);

	return (lowest_ancestor);
}


/**
 * ancestor - checks if the parent node of first is ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: parent node or null
 */
binary_tree_t *ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *node, *loop;
	int flag = 0;

	while (1)
	{
		if (first == NULL && loop == NULL)
		{
			return (NULL);
		}

		loop = (binary_tree_t *)second;

		while (loop)
		{
			if (first == loop)
			{
				flag = 1;
				node = (binary_tree_t *)first;
				break;
			}
			loop = loop->parent;
		}
		if (flag)
		{
			break;
		}
		first = first->parent;
	}

	return (node);
}
