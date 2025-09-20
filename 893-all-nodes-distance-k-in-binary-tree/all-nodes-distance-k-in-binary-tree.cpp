/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:


    unordered_map<TreeNode*, TreeNode*> parent;

    void inorder(TreeNode*root){
        if(root==NULL){
            return;
        }

        if(root->left != NULL){
            parent[root->left] = root;
            inorder(root->left);
        }

        if(root->right != NULL){
            parent[root->right] = root;
            inorder(root->right);
        }
    }


    void BFS(TreeNode* target, int k, vector<int> &result){

        queue<TreeNode*>que;
        que.push(target);

        unordered_set<int>visited;
        visited.insert(target->val);
        int level = 0;

        while(!que.empty()){
            int n = que.size();

            if(k==0){
                break;
            }

          while(n--){
            TreeNode* curr = que.front();
            que.pop();

            if(curr->left != NULL && !visited.count(curr->left->val)){
                que.push(curr->left);
                visited.insert(curr->left->val);
            }

            if(curr->right != NULL && !visited.count(curr->right->val)){
                que.push(curr->right);
                visited.insert(curr->right->val);
            }
            if(parent.count(curr) && !visited.count(parent[curr]->val)){
                que.push(parent[curr]);
                visited.insert(parent[curr]->val);
            }
          }  
          k--;
        }
        while(!que.empty()){
            TreeNode* temp = que.front();
            que.pop();
            result.push_back(temp->val);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>result;

        inorder(root);

        BFS(target,k,result);

        return result;

    }
};