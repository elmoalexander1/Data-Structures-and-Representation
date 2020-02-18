/* Elmo Alexander, linkedlist.c, 4/12/18 */
#include <stdio.h>
#include <stdlib.h>

/*creating a struct with our ListNodes */
struct List {
  struct ListNode *head;
}
struct ListNode {
  struct ListNode *next;
  int value;
}

  
  
