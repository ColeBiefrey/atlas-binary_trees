#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node to check
 * Return: 1 if node is root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node && !(node->parent))
		root = 1;

	return (root);
}
