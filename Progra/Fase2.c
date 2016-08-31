/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "ping.h"
#include "abdrive.h"


int main()                                    // Main function
{
      int frente;
      int derecha;
      int izquierda;
      
     
  while(1)
  {
    
     frente=ping_cm(8);
     freqout(1,1,38000);
     derecha=input(2);      //la senal infrarojo derecha esta en el pin 2
     freqout(1,1,38000);
     izquierda=input(10);   //la senal infrarrojo izquierda esta en el pin 10
    
    do{
      caminarFrente();
     }while(derecha!=0);
     
     girarDerecha();
     caminarFrente();
     
     if(frente<7 && derecha==0)
        girarIzquierda();    
  }
  
}
