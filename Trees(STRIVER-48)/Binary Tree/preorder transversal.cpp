//APPROACH-1
    class Solution {  
public: 
    void helper(TreeNode* root,vector<int>&ans){
        if(root == NULL){
            return ;
        }
        ans.push_back(root->val);
        helper(root->left,ans);
        helper(root->right,ans);
    }

    vector<int> preorderTraversal(TreeNode* root) { 
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};
//APPROACH -2 
    class Solution {
    public:
vector<int> preorderTraversal(TreeNode *root)
{
    // Create answer array to store traversal.
    vector<int> answer;

    // Base case.
    if (root == NULL)
    {
        return answer;
    }

    // Create an empty stack.
    stack<TreeNode *> s;

    // Push 'ROOT' to stack.
    s.push(root);

    // Run a loop until stack is not empty.
    while (s.empty() == false)
    {

        // Get the top node from stack.
        TreeNode *node = s.top();

        // Add data of top node to 'ANSWER'.
        answer.push_back(node->val);

        // Pop the top node.
        s.pop();

        // Push right subtree of node to stack.
        if (node->right)
        {
            s.push(node->right);
        }

        // Push left subtree of node to stack.
        if (node->left)
        {
            s.push(node->left);
        }
    }

    // Return answer.
    return answer;
}

};
