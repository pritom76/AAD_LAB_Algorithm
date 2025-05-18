#include <iostream>
#include <vector>
using namespace std;
// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node in BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal to print sorted values
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Function to delete the BST and free memory
void deleteTree(Node* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// BST Sort function
void bstSort(vector<int>& arr) {
    Node* root = nullptr;

    // Insert all elements into BST
    for (int num : arr) {
        root = insert(root, num);
    }

    // Print sorted elements using inorder traversal
    inorderTraversal(root);

    // Clean up memory
    deleteTree(root);
}

int main() {
    vector<int> numbers;
    int n, num;

    cout << "Enter the number of elements to sort: ";
    cin >> n;

    cout << "Enter " << n << " numbers separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    cout << "\nOriginal array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sorted array: ";
    bstSort(numbers);
    cout << endl;

    return 0;
}
