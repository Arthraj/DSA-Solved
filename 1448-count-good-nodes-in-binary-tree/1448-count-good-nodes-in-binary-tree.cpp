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
    
    int countGoodNodes(TreeNode* root, priority_queue<int>pq){
        if(root==NULL)
            return 0;
        
        pq.push(root->val);
        int res=0;
        if(pq.top()==root->val)
                res+=1;
        
        int lc=countGoodNodes(root->left,pq);
        int rc=countGoodNodes(root->right,pq);
        
        res+=lc+rc;
        
        pq.pop();
        return res;
    }
    
    
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        priority_queue <int> pq;
        return countGoodNodes(root,pq);;
    }
};