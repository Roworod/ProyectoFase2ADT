/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "ping.h"

int distance;

int main()                                    // Main function
{
  // Add startup code here.

 
  while(1)
  {
    // Add main loop code here.
    distance=ping_cm(8);
    print (%c distance= %d%c cm",
            HOME, distance, CLREOL);
            
    pause(200);
  }  
}
