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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            return new TreeNode(val);
        }
        TreeNode* curr = root;
        while(true){
            if(curr->val <= val){
                if(curr->right != NULL) curr = curr->right;
                else{
                    curr->right = new TreeNode(val);
                    break;
                }
            }
            else{
                if(curr->left != NULL) curr = curr->left;
                else{
                    curr->left = new TreeNode(val);
                    break;
                }
            }
        }
        
        return root;
    }
};