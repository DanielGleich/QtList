#ifndef NODE_H
#define NODE_H

struct Node{
  int value;
  Node* before;
  Node* next;

  Node() {
    before = NULL;
    next = NULL;
  }
};

#endif // NODE_H
