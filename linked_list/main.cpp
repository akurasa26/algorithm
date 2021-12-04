#include <stdexcept>
#include <iostream>
using namespace std;

class Node
{

public:
  int data;

  Node *next;

  Node()
  {
    data = -1;
  }
  Node(int _data)
  {
    data = _data;
    next = nullptr;
  }
};

class LinkedList
{
private:
  Node *head;
  Node *tail;
  int nodeCount = 0;

public:
  LinkedList()
  {
    head = nullptr;
    tail = nullptr;
  }
  Node *getAt(int pos)
  {
    if (head == nullptr || pos < 1 || pos > nodeCount + 1)
    {
      throw std::out_of_range("Invalid position");
    }
    Node *current = head;
    for (int i = 1; i < pos; i++)
    {
      current = current->next;
    }

    return current;
  }

  Node *getHead()
  {
    return head;
  }

  Node *getTail()
  {
    return tail;
  }

  int getLength()
  {
    return nodeCount;
  }

  void insertAt(int pos, Node *node)
  {
    if (pos < 1 || pos > nodeCount + 1)
    {
      throw std::out_of_range("Invalid position");
    }
    if (pos == 1)
    {
      node->next = head;
      head = node;
    }
    else
    {
      Node *prev = getAt(pos - 1);
      node->next = prev->next;
      prev->next = node;
    }
    if (pos == nodeCount + 1)
    {
      tail = node;
    }
    nodeCount++;
  }

  void insertAfter(Node *node, Node *newNode)
  {
    if (node == nullptr)
    {
      throw std::out_of_range("Invalid node");
    }
    Node *next = node->next;
    newNode->next = next;
    node->next = newNode;
  }
  int popAt(int pos)
  {
    if (pos < 1 || pos > nodeCount)
    {
      throw std::out_of_range("Invalid position");
    }
    Node *current = head;
    if (pos == 1)
    {
      head = head->next;
    }
    else
    {
      Node *prev = getAt(pos - 1);
      current = prev->next;
      prev->next = prev->next->next;
    }
    if (pos == nodeCount)
    {
      tail = getAt(pos - 1);
    }
    nodeCount--;
    return current->data;
  }
  int popAfter(Node *node)
  {
    if (node == nullptr)
    {
      throw std::out_of_range("Invalid node");
    }
    Node *current = node->next;
    node->next = current->next;
    if (current == tail)
    {
      tail = node;
    }
    nodeCount--;
    return current->data;
  }
};

int main()
{
  LinkedList list;
  list.insertAt(1, new Node(1));
  list.insertAt(2, new Node(2));

  cout << list.getAt(1)->data << endl;

  return 0;
}
