#include <stdlib.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int order = 0;
void inorder(struct TreeNode* root, int* tree) {
    if(root != NULL){
        inorder(root -> left, tree);
        tree[order] = root->val;
        order++;
        inorder(root -> right, tree);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(100 * sizeof(int));
    order = 0;
    inorder(root, arr);
    *returnSize = order;
    return arr;
}
