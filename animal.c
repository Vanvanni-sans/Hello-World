#include <stdio.h>
#include <string.h>

int main() {
  char p1[21], p2[21], p3[21];
  scanf("%s %s %s", p1, p2, p3);

  if (!strcmp(p1, "vertebrado"))
    if (!strcmp(p2, "ave"))
      if (!strcmp(p3, "carnivoro"))
        printf("aguia\n");
      else 
        printf("pomba\n");
    else
      if (!strcmp(p3, "onivoro"))
        printf("homem\n");
      else 
        printf("vaca\n");
  else 
    if(!strcmp(p2, "inseto"))
      if (!strcmp(p3, "hematofago"))
        printf("pulga\n");
      else
        printf("lagarta\n");
    else 
      if (!strcmp(p3, "hematofago"))
        printf("sanguessuga\n");
      else
          printf("minhoca\n");
        
return 0;
}
