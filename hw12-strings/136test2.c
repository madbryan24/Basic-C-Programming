#include<stdio.h>
#include<string.h>
void main(){
    int i;
    char a[10];
  char b[5][100] = {"TV127 31 inch Television", "CD057 CD Player", "TA877 Answering Machine", "CS409 Car Stereo", "PC655 Personal Computer"};
  char *c;
  for (i= 0; i< 5; i++ ){
    printf("\n%s",b[i]);
  }
  printf("\n\nEnter string a: ");
  scanf("%s",a);
  for (i = 0; i < 5; i++){
    c = strstr(b[i],a);
    if (c != NULL) break;
  }
  if (c == NULL) printf("WRONG INPUT");
  else printf("%s",c+6);
}
