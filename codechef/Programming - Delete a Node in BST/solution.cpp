#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    Node* deleteNode(Node* root, int x) {
        // your code goes here
        if(root == nullptr) return nullptr;
        if(x < root->val) 
        root->left = deleteNode(root->left , x);
        else if(x > root->val)
        root->right = deleteNode(root->right , x);
        else{
            if(root->left == nullptr){
                Node* temp = root->right;
                delete root;
                return temp;
            }
            if(root->right == nullptr){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = root->right;
            while(temp->left != nullptr)
            temp = temp->left;
            root->val = temp->val;
            root->right = deleteNode(root->right , temp->val);
        }
        return root;
    }
};

void inOrder(Node* root, vector<int> &nodes){
    if(root == NULL)
      return;
    inOrder(root -> left, nodes);
    nodes.push_back(root->val);
    inOrder(root -> right, nodes);
}

Node* buildBinaryTree(vector<pair<pair<int, int>, char>>& edges) {
    unordered_map<int, Node*> nodes;
    unordered_set<Node*> children;

    for (const auto& edge : edges) {
        int parentVal = edge.first.first;
        int childVal = edge.first.second;
        char direction = edge.second;

        Node* parentNode;
        Node* childNode;

        if (nodes.find(parentVal) == nodes.end()) {
            parentNode = new Node(parentVal);
            nodes[parentVal] = parentNode;
        } else {
            parentNode = nodes[parentVal];
        }

        if(nodes.find(childVal) == nodes.end()) {
          childNode = new Node(childVal);
          nodes[childVal] = childNode;
        } else {
          childNode = nodes[childVal];
        }

        if (direction == 'L') {
            parentNode->left = childNode;
        } else {
            parentNode->right = childNode;
        }

        children.insert(childNode);
    }

    Node* root = NULL;
    for (const auto& it : nodes) {
        if (children.find(it.second) == children.end()) {
            root = it.second;
            break;
        }
    }
    return root;
}

bool validateBST(Node* node, Node* &prev) {
    if (node == NULL) return true;
    if (!validateBST(node->left, prev)) return false;
    if (prev != NULL && prev->val >= node->val) return false;
    prev = node;
    return validateBST(node->right, prev);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  
    int nodes, x;
    if (!(cin >> nodes >> x)) return 0;
    
    assert(nodes >= 1 && nodes <= 10000);
   
    vector<pair<pair<int, int>, char>> edges;
    set<int> unique_nodes;
    
    for(int i = 1; i < nodes; i++){
        int p, c;
        char r;
        cin >> p >> c >> r;
        assert(p >= 1 && p <= 100000);
        assert(c >= 1 && c <= 100000);
        assert(r == 'L' || r == 'R');
        unique_nodes.insert(p);
        unique_nodes.insert(c);
        edges.push_back({{p, c}, r});
    }
    
    Node* root = NULL;
    vector<int> bst_nodes;
    
    if (nodes == 1) {
        // N = 1 ?? ??? root node ?? ?????? ????? '1' ???? ??
        root = new Node(1);
        unique_nodes.insert(1);
        bst_nodes.push_back(1);
    } else {
        root = buildBinaryTree(edges);
        inOrder(root, bst_nodes);
    }

    assert(unique_nodes.size() == nodes);
    assert(bst_nodes.size() == nodes);
    
    // Check if target node x exists in the tree before deleting
    bool exists = (unique_nodes.find(x) != unique_nodes.end());

    Solution sol;
    root = sol.deleteNode(root, x);
    
    bst_nodes.clear();
    inOrder(root, bst_nodes);
    
    // Size check verification
    int expected_size = exists ? (nodes - 1) : nodes;
    assert(bst_nodes.size() == expected_size);
    
    Node* prev = NULL;
    assert(validateBST(root, prev) == true);
    
    // Ensure target node x no longer exists
    for (int val : bst_nodes) {
        assert(val != x);
    }
    
    cout << "Successfully deleted the node!
";

    return 0;
}