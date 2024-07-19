#include <stdio.h>

int main(){
  short a, b, c;
  scanf ("%hd %hd %hd", &a, &b, &c);
  if (a > b && c >= b)
    printf(":)\n");
  else if (a < b && b >= c)
    printf(":(\n");
  else if (a < b && (b < c) < (a < b))
    printf(":(\n");
  else if (((a < b) && (b < c)) && ((c - b) < (b - a)))
    printf(":(\n");
  else if (((a < b) && (b < c)) && ((c - b) >= (b - a)))
    printf(":)\n");
  else if (((a > b) && (b > c)) && ((c - b) > (b - a)))
    printf(":)\n");
  else if (((a > b) && (b > c)) && ((c - b) <= (b - a)))
    printf(":(\n");
  else if (a == b && b < c)
    printf (":)\n");
  else
    printf(":(\n");
  return 0;
}
