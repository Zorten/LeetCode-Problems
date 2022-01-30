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
    TreeNode* createBST(vector<int> &nums, int left_index, int right_index ){
        if (left_index > right_index){
            return NULL;
        }
        
        int middle = (left_index + right_index) / 2;
        
        TreeNode* root = new TreeNode(nums.at(middle));
        root->left = createBST(nums, left_index, middle - 1);
        root->right = createBST(nums, middle + 1, right_index);
        
        return root;        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         return createBST(nums, 0, nums.size() - 1);
        
    }
};
