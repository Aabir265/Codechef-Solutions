struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    void postOrderTraversal(Node* root) {
        if(root == NULL){
            return;
        }
        if(root->left == NULL || root->right == NULL){
            cout << root->val;
            return;
        }
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<< root->val;
        
        
    }
};
val local
postOrderTraversal local
virtual keyword
volatile keyword