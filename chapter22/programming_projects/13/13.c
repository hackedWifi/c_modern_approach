/* Modify Programming Project 8 from Chapter 5 so that the program obtains de-
 * parture and arrival times from a file named flights.dat. Each line of the 
 * file will contain a departure time followed by an arrival time, with one or
 * more spaces separating the two. Times will be expressed using the 24-hour
 * clock. For example, here's what the flights.dat might look like if it con-
 * tained the flight informations listed in the original project.
 *
 */
#include <stdio.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int i, j, n, dep_hrs, dep_min, arr_hrs, arr_min ;
  int hours , minutes , minutes_since_midnight , dhour , arrival_time;

  char filename[] = "flights.dat";
  int times[8][2];
  FILE *fp = fopen(filename, "r");
  if(fp == NULL)
  {
    printf("Cannot open %s", filename);
    exit(EXIT_FAILURE);
  }
  i = 0;
  while((n = fscanf(fp, "%d:%d %d:%d", &dep_hrs, &dep_min, &arr_hrs, &arr_min))  != EOF) 
  {
    times[i][0] = (dep_hrs * 60) + dep_min;
    times[i][1] = (arr_hrs * 60) + arr_min;
    i++;

  }
  printf("Enter a 24-hour time: ");
  scanf("%d:%d",&hours, &minutes);
  minutes_since_midnight = (hours * 60) + minutes;
  if(minutes_since_midnight >= 1320 || minutes_since_midnight < 480) 
  {
    printf("Next departure is at 8:00 a.m. Arriving at 10:16am\n");
    return 0;
  }

  for ( i = 0; i < 8; i++ ) {
    for ( j = 0; j < 2; j++ ) {
      if(minutes_since_midnight >= times[i][0] ) {


        dhour =  times[i + 1][0] ;
        arrival_time = times[i + 1][1] ;


      }



    }
  }

  printf("Closest departure time is: %d:%d Arriving at %d:%d \n",dhour / 60, dhour % 60, arrival_time /60, arrival_time % 60); 
  fclose(fp);

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


