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



/*
        1
    2       3
4


Cases:-
1. root is NULL
2. root->left and right child are null
3. root node is the max till now in its path from oarent root
4. its lesser than all its parent
*/

class Solution {
public:
    int cnt=0;
    void countGoodNodes(TreeNode* root, int maxi){
        if(root==NULL)
            return;

        if(root->val>=maxi){
                cnt++;maxi=root->val;
        }        
        countGoodNodes(root->left,maxi);
        countGoodNodes(root->right,maxi);
        return;
    }
    
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        countGoodNodes(root,root->val);
        return cnt;
    }
};