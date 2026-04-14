/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int depth = 0;
    if(root == NULL){
        return depth; 
    }
    int leftdepth = maxDepth(root->left);
    int rightdepth = maxDepth(root->right);
    if(leftdepth > rightdepth){
        return 1 + leftdepth;
    }
    else{
        return 1 + rightdepth;
    }
}







f hkahfk ahfkja 
afdhka k fak ajg aja 
ufe hf fekj kfsf kfehsk 
aoif la flakjf lajf la
alfj alkjf lajfl aflka 
aksfalk fjla jfla jfls
akjd flka jfkd fafa 
alf jak fjldakj fla
asf jlakjf kajfl 
alf jalkf lakjfl fl af
af jaf jlf akjfl ajfal 
