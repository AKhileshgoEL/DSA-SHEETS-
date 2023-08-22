/**
 * Definition for a binary tree node.
 * struct TreeNode{
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
APPROACH -1 (RECURSIVE)
class Solution {
public:
    void helper(TreeNode* root,vector<int>&ans){
        if(root == NULL){
            return ;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};
// here use of helper is necessary because if not then we have to write the part of Line 15 to Line 20 under /* vector<int> inorderTraversal(TreeNode* root) */
//so cant use the part from line 15 to 17 as the return should be of type VOID
APPROACH -2 (ITERVATIVE)
  class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Create answer array to store traversal.
    vector<int> answer;

    // Base case.
    if (root == NULL)
    {
        return answer;
    }

    // Create an empty stack.
    stack<TreeNode *> s;

    // Initialize current node as 'ROOT'.
    TreeNode *current = root;

    // Run a loop until 'CURRENT'!= NULL or stack is not empty.
    while (current != NULL || s.empty() == false)
    {
        while (current != NULL)
        {
            // Push current node to stack.
            s.push(current);

            // Move to left subtree of 'CURRENT'.
            current = current->left;
        }

        // 'CURRENT' must be NULL at this point.
        current = s.top();

        // Pop top node from stack.
        s.pop();

        // Add data of popped node to answer.
        answer.push_back(current->val);

        // Visit right subtree of current node.
        current = current->right;
    }

    // Return answer.
    return answer;
    }
};
APPROACH - 3()
