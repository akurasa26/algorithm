#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data)
  {
    this->data = data;
    left = nullptr;
    right = nullptr;
  }
  int depth()
  {
    int l, r = 0;
    if (this->left != nullptr)
    {
      l = this->left->depth();
    }

    if (this->right != nullptr)
    {
      r = this->right->depth();
    }

    if (l > r)
    {
      return r + 1;
    }

    return l + 1;
  }

  vector<int> preorder()
  {
    vector<int> v;

    v.push_back(data);
    if (left != nullptr)
    {
      vector lefts = left->preorder();
      v.insert(v.end(), lefts.begin(), lefts.end());
    }
    if (right != nullptr)
    {
      vector rights = left->preorder();
      v.insert(v.end(), rights.begin(), rights.end());
    }
    return v;
  }

  vector<int> postorder()
  {
    vector<int> v;

    if (left != nullptr)
    {
      vector lefts = left->preorder();
      v.insert(v.end(), lefts.begin(), lefts.end());
    }
    if (right != nullptr)
    {
      vector rights = left->preorder();
      v.insert(v.end(), rights.begin(), rights.end());
    }
    v.push_back(data);
    return v;
  }
};

class BinaryTree
{
private:
  Node *root;

public:
  BinaryTree()
  {
    root = nullptr;
  }
  vector<int> preorder()
  {
    if (root != nullptr)
    {
      return root->preorder();
    }
    return vector<int>();
  }
  vector<int> postorder()
  {
    if (root != nullptr)
    {
      return root->postorder();
    }
    return vector<int>();
  }
  vector<int> bft()
  {
    vector<int> v;
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
      Node *n = q.front();
      v.push_back(n->data);
      if (n->left != nullptr)
      {
        q.push(n->left);
      }
      if (n->right != nullptr)
      {
        q.push(n->right);
      }
      q.pop();
    }
    return v;
  }
};