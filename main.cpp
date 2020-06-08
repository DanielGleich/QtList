#include <stdio.h>
#include "node.h"
#include "list.h"

using namespace std;

int main()
{
  List* list;

  list = new List();

  list->append(1);
  list->append(3);
  list->insert(1000,1);
  list->insert(9999,1);
  list->append(1);
  list->append(3);
  list->prepend(12);
  list->append(1);
  list->append(3);
  list->append(1);
  list->append(3);
  list->append(1);
  list->prepend(12);
  list->append(3);
  list->append(1);
  list->append(3);
  list->append(1);
  list->append(3);
  list->prepend(12);
  //list->insert(2,2);
  //list->insert(4,100);
  //list->insert(0,-100);
  list->printList();
  cout << endl << endl;
  return 0;
}
