/* problem solver: musshal */

#include <stdio.h>
#include <string.h>

int main()
{
  /* dictionary */
  char usDate[20];
  char monthName[12];
  int month, day, year;
  char *months[]={
    "January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"
  };
  
  /* algorithm */
  fgets(usDate, 20, stdin);
  
  month = 0;
  if (strlen(usDate) > 11){
    sscanf(usDate, "%s %d, %d", monthName, &day, &year);
    while (strcmp(monthName, months[month++]) && month<12);
  }
  else{
    sscanf(usDate, "%d/%d/%d", &month, &day, &year);
  }
  
  printf("%d/%d/%d", day, month, year);
  
  return 0;
}
