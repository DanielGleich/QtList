#ifndef LIST_H
#define LIST_H
#include <stddef.h> // NULL WAS NOT DECLARED
#include <iostream>
#include "node.h"

using namespace std;

class List
{
private:
  Node* first;
  Node* last;
public:
  void printList() const;
  void append(int value);
  void prepend(int value);
  void push_back(int value);
  void push_front(int value);
  void clear();
  void insert( int value, int position );
  int count() const;
  int size() const;
  bool isEmpty() const;
  void removeAt( int position );
  bool contains ( int value ) const;
  int takeFirst();
  int takeLast();
  List();
};

#endif // LIST_H
