#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"  

class Ultrasonido{
 private:
 long distancia;
 public:
 byte pinEcho;
 byte pinTigger;
 //Constructor parametrizado, recibe como parametros 
 //Tigger y Echo como byte
 Ultrasonido (byte _pinTigger, byte _pinEcho);
 Ultrasonido();
//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros 
 int medirCM();
};

class Display7
{
private:
 byte matrix[10][7]=
 {
  //A,B,C,D,E,F,G
  {1,1,1,1,1,1,0}//CERO
  {0,1,1,0,0,0,0}//UNO
  {1,1,0,1,1,0,1}//DOS 
  {1,1,1,1,0,0,1}//TRES
  {0,1,1,0,0,1,1}//CUATRO
  {1,0,1,1,0,1,1}//CINCO
  {1,0,1,1,1,1,1}//SEIS
  {1,1,1,0,0,0,0}//SIETE 
  {1,1,1,1,1,1,1}//OCHO
  {1,1,1,0,0,1,1}//NUEVE
};
 public:
 byte pines[7];
 //Se configura utilizando un metodo 
 void configurar(byte[]);
 //Dibuja el numero del display
 void mostrar(byte num);
};
#endif
