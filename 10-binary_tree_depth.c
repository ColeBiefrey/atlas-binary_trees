#include "binary_trees.h"

/**
 * recursive_depth - measures the depth of node in binary tree
 * @tree: tree root
 * Return: depth of node in binary tree
 */

size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls recursive_depth to return depth
 * of node in binary tree
 * @tree: tree root
 * Return: depth of tree or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
