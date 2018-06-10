
#include <Rainbowduino.h>

void setup()
{
  Rb.init(); //initialize Rainbowduino driver
}

unsigned int z,x,y;

void loop()
{

  
for(x=0;x<4;x++)  {
         delay(10);   
    for(y=0;y<5;y++)
    {
      delay(10); 
      for(z=0;z<4;z++){
    delay(10); 
 Rb.setPixelZXY(z,x,y,0xfb,00,random(0xFF));
      }
    }
   }
   delay(1000);
   
    for(x=0;x<7;x++)  {
         delay(10);   
          
    for(y=0;y<6;y++)
    {
      delay(10); 
      for(z=0;z<6;z++) {
    delay(10); 
 Rb.setPixelZXY(z,x,y,0xff,72,random(0xFF));
      }
    }
   }


       for(x=0;x<7;x++)  {
         delay(10);   
          
    for(y=0;y<6;y++)
    {
      delay(10); 
      for(z=0;z<6;z++) {
    delay(10); 
 Rb.setPixelZXY(z,x,y,0xfb,46,random(0xFF));
      }
    }
   }


  
}
