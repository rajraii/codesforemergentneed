// Search the lement inn Linkedlist Recursive and iterative

#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};

node *insert_begin(node *head, int x)
{
  // Inserting a node at the begining
  node *temp = new node(x);
  temp->next = head;
  return temp;
}

// ! Iterative

int search(node *head, int x)
{
  int pos = 1;
  node *curr = head;
  while (curr != NULL)
  {
    if (curr->data == x)
      return pos;
    pos++;
    curr = curr->next;
  }
  return -1;
}

// ! Recursive

int searchr(node *head, int x)
{
  if (head == NULL)
    return -1;
  if (head->data==x)
    return 1;
  else
  {
    int res = search(head->next, x);
    if (res == -1)
      return -1;
    else
      return res + 1;
  }
}

int main()
{
  node *head = NULL;
  head = insert_begin(head, 30);
  head = insert_begin(head, 40);
  cout << search(head, 30);
  cout << searchr(head, 30);
}