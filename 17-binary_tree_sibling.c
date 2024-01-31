#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a
 *                       node in a binary tree.
 * @node: pntr to the node to find the sibling of.
 * Return:  node is NULL , there is no sibling - NULL.
 *         Otherwise - pntr to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
