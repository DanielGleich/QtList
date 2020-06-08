#include "list.h"

void List::printList() const
{
  cout << "Liste:" << endl;
  if (first)
    {
      Node* path = first;
      while (path)
        {
          cout << path->value << endl;
          path = path->next;
        }
    }
}

void List::append(int value)
{
  if (first == NULL) {
      first = new Node();
      first->value = value;
      last = new Node();
      last->before = first;
      last->value = value;
    }
  else {
      Node* path = first;
      while (path->next != NULL)
          path = path->next;
      Node* newNode = new Node;
      newNode->before = path;
      newNode->value = value;
      path->next = newNode;
      last = newNode;
    }
}

void List::prepend(int value)
{
  if (!first)
      append(value);

  else {
      Node* newFirst = new Node();
      newFirst->value = value;
      newFirst->next = first;
      first->before = newFirst;
      first = newFirst;
    }
}

void List::push_back(int value)
{
  append(value);
}

void List::push_front(int value)
{
  prepend(value);
}

void List::clear()
{
  if (first) {
      while (first != NULL) {
          Node* delNode = first;
          first = first->next;
          delete delNode;
        }
    }
}

void List::insert(int value, int position)
{

}

int List::count() const
{

}

int List::size() const
{

}

bool List::isEmpty() const
{

}

void List::removeAt(int position)
{

}

bool List::contains(int value) const
{

}

int List::takeFirst()
{

}

int List::takeLast()

{

}
List::List()
{
  first = NULL;
  last = NULL;
}
