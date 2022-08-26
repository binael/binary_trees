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
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first->parent == NULL || second->parent == NULL)
	{
		return (NULL);
	}

	if (is_ancestor_parent(second, first))
	{
		return (second->parent);
	}
	else if (is_ancestor_parent(first, second))
	{
		return (first->parent);
	}

	return (NULL);
}


/**
 * is_ancestor_parent - checks if the parent node of first is ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: parent node or null
 */
binary_tree_t *is_ancestor_parent(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *node;

	if (first->parent == second)
	{
		return (first->parent);
	}
	if (second->parent == NULL)
	{
		return (NULL);
	}

	node = is_ancestor_parent(first, second->parent);

	return (node);
}
