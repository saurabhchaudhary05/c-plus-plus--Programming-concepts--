#include<stdio.h>
int main() {
  int cust_id;
  char cust_name[50];
  float unit_price, quantity, total_amount, tax, net_amount;

  printf("Enter customer ID: ");
  scanf("%d", &cust_id);

  printf("Enter customer name: ");
  scanf("%s", cust_name);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter quantity: ");
  scanf("%f", &quantity);

  total_amount = unit_price * quantity;
  tax = total_amount * 0.1;
  net_amount = total_amount + tax;

  printf("\n\nCustomer ID: %d", cust_id);
  printf("\nCustomer Name: %s", cust_name);
  printf("\nTotal Amount: %.2f", total_amount);
  printf("\nTax: %.2f", tax);
  printf("\nNet Amount: %.2f", net_amount);

  return 0;
}
