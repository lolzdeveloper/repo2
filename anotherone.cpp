#include<bits/stdc++.h>
using namespace std;

// Insert into a Binary Search Tree Problem

struct TreeNode{
    TreeNode* left, *right;
    int val;
    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root == NULL) return NULL;
        if(root->val == val) return root;
        if(root->val > val) return searchBST(root->left, val);
        return searchBST(root->right, val);
        
    }
};