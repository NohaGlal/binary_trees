#include "binary_trees.h"

/**
 * binary_tree_is_leaf - func to check if a node is a leaf of a binary tree.
 * @node: pntr to the node to check.
 * Return:  1 (true)
 *         0 (false)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
