//Header de funciones para moverse
//Authors: Robbin Woods 15201
//Dieter de Witt 15146
//Gerardo Cardoza 15410
//version:1.0

//Librerias de C para Paralax
#include "simpletools.h"
#include "abdrive.h"
#include "ping.h"

//Funciones de movimeinto con cantidades y correccion
void girarDerecha(){
    drive_goto(25,-25);
  }
  
void girarIzquierda(){
    drive_goto(-25,25);
    }
  
void caminarFrente(){
    drive_ramp(25,25);
  }
  
void caminarParaGiro(){
    drive_goto(30,30);
  }
  
  
void voltearse(){
    drive_goto(50,-50);
  }
  
 int paredFrente(){
        int frente= ping_cm(8);   //la senal se recibe en el pin 8;
        return frente;
      }
      
     int paredDercha(){
          freqout(1,1,38000);
          int derecha=input(2);      //la senal infrarojo derecha esta en el pin 2
          return derecha;
       }
       
     int paredIzquierda(){
          freqout(1,1,38000);
          int izquierda=input(10);   //la senal infrarrojo izquierda esta en el pin 10
          return izquierda;
       }
       
