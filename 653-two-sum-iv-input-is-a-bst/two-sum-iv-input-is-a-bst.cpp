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
    unordered_set<int>set;
public:
         bool findTarget(TreeNode* root, int k) {
         if(!root) return false;

      if(set.count(k-root->val)) return true;
      set.insert(root->val);
      return findTarget(root->left, k) || findTarget(root->right, k);
    }
    
};



// MEMORY FULL

//       void inorder(TreeNode* root, vector<int>&arr){
//         if(!root){
//             return;
//         }

//         inorder(root->left, arr);
//         arr.push_back(root->val);
//         inorder(root->right,arr);

//     }  

//     bool check(vector<int>arr, int start, int end, int k){
//             if(start >= end){
//                 return false;
//             }
            
//             int sum = arr[start] + arr[end];
           
//             if(sum == k){
//                 return true;
//             }

//             if(sum < k){
//            return check(arr, start+1, end,k);
//             }
//             else{
//                return  check(arr, start, end-1,k);
//             }
//     }
 

//     bool findTarget(TreeNode* root, int k) {
//         vector<int>arr;
//         inorder(root,arr);
        

//         return check(arr, 0, arr.size()-1, k);
//     }
    
// };