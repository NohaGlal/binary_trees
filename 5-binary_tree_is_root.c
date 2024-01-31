#include "binary_trees.h"

/**
 * binary_tree_is_root - func to check if a node is a root of  binary tree.
 * @node: pntr to the node to check.
 * Return:  1 if the node is a root
 *          0 (error)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
