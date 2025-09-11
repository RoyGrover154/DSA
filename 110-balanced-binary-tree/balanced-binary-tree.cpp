/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


// int height(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }else{
//         return  1+ max(height(root->left), height(root->right));
//     }
// }

// void inorderUtil(TreeNode* root, bool &ans){
//     if(root != NULL){
//         inorderUtil(root->left,ans);
//         int lh = height(root->left);
//         int rh = height(root->right);

//         if(abs(lh-rh)>1)
//             ans = ans && false;

//         inorderUtil(root->right,ans);    
//     }
// }

int checkHeight(TreeNode* root){
    if(root==NULL)
    return 0;

    int lh = checkHeight(root->left);
    if(lh == -1) return -1;

    int rh = checkHeight(root->right);
    if(rh == -1) return -1;

    if(abs(lh-rh) > 1) return -1;

    return max(lh,rh) + 1;
}

bool isBalanced(TreeNode* root) {
      return checkHeight(root) != -1;
    }

};