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
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        dfs(root, count);
        return count;
    }

private:
    std::pair<int, int> dfs(TreeNode* node, int& count) {
        if (!node) {
            return {0, 0};
        }

        auto [left_sum, left_count] = dfs(node->left, count);
        auto [right_sum, right_count] = dfs(node->right, count);

        int current_sum = node->val + left_sum + right_sum;
        int current_count = 1 + left_count + right_count;

        if (current_sum / current_count == node->val) {
            count++;
        }

        return {current_sum, current_count};
    }
};
