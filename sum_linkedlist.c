node* addSameLen(node *a, node *b, int *carry){

  if(a == NULL){
    return;
  }
  int sum;
  Node *result = (Node *)malloc(sizeof(Node));
  *result->next = addSameLen(a->next, b->next, carry);
  sum = a->data + b->data + *carry;
  *carry = sum/10;
  result->data = sum%10;
  return result;
}

void adddifferentLen(node *a, int *carry, int *cur, int **result){
  if(a != cur){
    adddifferentLen(a->next, b, carry, cur);
  }
  sum = a->data + *carry;
  *carry = sum/10;
  temp = (Node *)malloc(sizeof(Node));
  temp->data = sum/10;
  temp->next = *result;
  *result = temp;
}

main(){
  addSameLen()
  adddifferentLen()
  if(carry){
  temp = (Node *)malloc(sizeof(Node));
  temp->data = carry;
  temp->next = *result;
  *result = temp;
  }
}
