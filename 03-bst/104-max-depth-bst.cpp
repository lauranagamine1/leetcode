//
// Created by laura on 7/08/2025.
//
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode* root){
    if(root == nullptr) {
        return 0;
    }

    auto left= maxDepth(root->left);
    auto right = maxDepth(root->right);

    return max(left,right)+1;
}

int main() {
    // 1. Crear la raíz
    TreeNode* tree = new TreeNode(3);

    // 2. Crear e hijo izquierdo (CORRECCIÓN: hay que usar 'new')
    tree->left = new TreeNode(9);

    // 3. Crear el hijo derecho y sus propios hijos
    TreeNode* nodoDerecho = new TreeNode(20);
    nodoDerecho->left = new TreeNode(15);
    nodoDerecho->right = new TreeNode(7);

    // 4. Conectar el subárbol derecho a la raíz
    tree->right = nodoDerecho;

    cout<<maxDepth(tree);

    delete tree;
}