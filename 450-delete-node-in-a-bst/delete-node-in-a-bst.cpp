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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }
       
    if(root->val > key){
        root->left = deleteNode(root->left,key);
        return root;
    }
    if(root->val < key){
        root->right = deleteNode(root->right,key);
        return root;
    }

    else{
        //leaf node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        //one child
        else if(!root->left){
            TreeNode *temp = root->right;
            delete(root);
            return temp;
        }
        else if(!root->right){
            TreeNode* temp = root->left;
            delete(root);
            return temp;
        }
        //two child
        else{
            //find greatest element from left

            TreeNode* child = root->left;
            TreeNode* parent = root;

            //right most node 
            while(child->right){
                parent = child;
                child = child->right;
            }
            if(root != parent){
                parent->right= child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;

            }else{
                child->right=root->right;
                delete(root);
                return child;
            }
        }

    }
       
        
    }
};