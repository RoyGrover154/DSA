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

void findlargest(TreeNode* root, int &ans, int &k){
      if(!root){
        return;
       } 
       
       findlargest(root->left,ans, k);
        k--;
       if(k==0){
         ans = root->val;
       }
       if(k<=0){
        return;
       }
        findlargest(root->right,ans, k);
    }

    int kthSmallest(TreeNode* root, int k) {
     
     int ans;
     findlargest(root, ans, k);

     return ans;
    }
};