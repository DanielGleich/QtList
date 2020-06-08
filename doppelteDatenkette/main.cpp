#include <stdio.h>
#include <iostream>
#include "list.h"

using namespace std;

int main()
{
  List list;
  list.append(12);
  list.append(13);
  list.append(15);
  list.prepend(234);
  //list.clear();
  list.printList();

  return 0;
}
