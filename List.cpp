#include "list.h"

List::List()
{
  first = NULL;
  last = NULL;
}

void List::printList() const
{
  Node* temp = first;
  std::cout << "Liste:" << std::endl;
  while ( temp != NULL )
    {
      std::cout << temp->value << std::endl;
      temp = temp->next;
    }
}

void List::append(int value)
{
  if (first == NULL)
    {
      first = new Node;
      first->value = value;
      first->next = NULL;
      last = first;
    }
  else {
      Node* temp = new Node;
      temp->value= value;
      temp->next = NULL;
      last->next = temp;
      last = temp;
    }
}

void List::push_back(int value)
{
  append (value);
}

void List::prepend(int value)
{
  if (first == NULL)
    append(value);
  else {
      Node* temp = new Node;
      temp->value= value;
      temp->next = first;
      first = temp;
    }
}

void List::push_front(int value)
{
  prepend(value);
}

void List::clear()
{
  while(first!= NULL)
    {
      Node* temp = first;
      first= first->next;
      delete temp;
    }
}

void List::insert(int value, int position)
{
  if ( position <= 1 ) // Wenn Position 0 oder 1 ist
    prepend(value);
  else if (position > size())
    append(value);
  else
    {
      Node* temp = first;
      for(int curPos = 2; curPos < position ; curPos++)
          temp = temp->next;
      Node* afterTemp = temp->next;
      Node* newNode = new Node();
      temp->next = newNode;
      newNode->value = value;
      newNode->next = afterTemp;
    }
}

int List::count() const
{
  if (!first)
    return 0;
  else
    {
      Node* temp = first;
      int i = 1;
      for(; temp->next != NULL ; i++)
        temp = temp->next;
      return i;
    }
}

int List::size() const
{
  return count();
}

bool List::isEmpty() const
{
  if (first)
    return true;
  else return false;
}

void List::removeAt(int position)
{
  if (position <= 1)
    takeFirst();
  else if (position > count())
    takeLast();
  else {
      Node* beforeNode = new Node();
      Node* positionNode = first;
      for (int curPos = 2; curPos <= position; curPos++)
        {
          beforeNode = positionNode;
          positionNode = positionNode->next;
        }
      beforeNode->next = positionNode->next;
      delete positionNode;
    }
}

bool List::contains(int value) const
{
  Node* path = first;
  for(int i = 0; i < count(); i++) {
      if ( path->value == value)
        return true;
      path= path->next;
    }
  return false;
}

int List::takeFirst()
{
  if (first != NULL)
    {
      int firstValue = first->value;
      Node* temp= first;
      first = first->next;
      delete temp;
      return firstValue;
    }
}

int List::takeLast()
{
  if (first->next != NULL)
    {
      Node* nextToLast = first;
      while (nextToLast->next != last)
          nextToLast = nextToLast->next;
      int lastValue = last->value;
      Node* deleteIt = last;
      last = nextToLast;
      nextToLast->next = NULL;
      delete deleteIt;
      return lastValue;
    }
}
