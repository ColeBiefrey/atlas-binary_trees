#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of node
 * @node: node
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
