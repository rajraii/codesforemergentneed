// ! Find the Middle of The linked list

#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

// Naive Approach - Iterative O(n+ n/2)
void printMiddle(node *head)
{
  if (head == NULL)
    return ;
  int count(0);
  node *curr;
  for (curr = head; curr != NULL; curr = curr->next)
    count++;
  curr = head;
  for (int i = 0; i < count / 2; i++)
    curr = curr->next;
  cout << curr->data << endl;
}

// Efficient approach Two pointer approach O(n/2)

void printMiddle(node *head){
  if(head==NULL) return ;
  node *slow =head, *fast=head;
  while( !fast && !fast->next){
    slow=slow->next;
    fast=fast->next->next;
  }
  cout<<slow->data;
}