/* 
   Demonstration of MAXSYMLINKS

   Computer Science 432, Williams College, Fall 2002, Spring 2005
   CSIS 330, Siena College, Fall 2020

   Jim Teresco
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/param.h>

int main() {

  int i;
  char file1[10], file2[10];

  /* make link "link1" to this file */
  if (symlink("morelinks.c", "link1") == -1) {
    perror("symlink");
    return 1;
  }

  for (i=1; i<=MAXSYMLINKS; i++) {
    /* make link(i+1) to link(i) */
    sprintf(file1,"link%d",i);
    sprintf(file2,"link%d",i+1);
    if (symlink(file1, file2) == -1) {
      perror("symlink");
      return 1;
    }
  }
  return 0;
}

