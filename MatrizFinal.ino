#include <Adafruit_NeoPixel.h>  
 
 int NUMPIXELS=59;   //Numero de leds conectados  
 int flag=0; 
 int contE = 0; 
 int colmI = -59;  
 char abc[27]={"abcdefghijklmnopqrstuvwxyz"}; 
 char ABC[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
 char palabra[28]={"              "}; 
 String asdC; 
 String asd; 
 int mode=1; 

 byte aa[8][6]={   {0,0,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}}; 
 byte bb[8][6]={   {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,0}}; 
 byte cc[8][6]={   {0,0,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,0,1,1,1,1}}; 
 byte dd[8][6]={   {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,0}}; 
 byte ee[8][6]={   {0,0,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,0,1,1,1,1}}; 
 byte ff[8][6]={   {0,0,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}}; 
 byte gg[8][6]={   {0,0,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,1,1,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,0,1,1,1,0}}; 
 byte hh[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}}; 
 byte ii[8][6]={   {0,1,1,1,1,1}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,1,1,1,1,1}}; 
 byte jj[8][6]={   {0,1,1,1,1,1}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,1,1,1,0,0}}; 
 byte kk[8][6]={   {0,1,0,0,0,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,1,0}, 
                 {0,1,1,1,0,0}, 
                 {0,1,0,0,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}}; 
 byte ll[8][6]={   {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,1,1,1,1}}; 
 byte mm[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,1,0,1,1}, 
                 {0,1,0,1,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}}; 
 byte nn[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,1,0,0,1}, 
                 {0,1,1,0,0,1}, 
                 {0,1,0,1,0,1}, 
                 {0,1,0,1,0,1}, 
                 {0,1,0,0,1,1}, 
                 {0,1,0,0,1,1}, 
                 {0,1,0,0,0,1}}; 
 byte oo[8][6]={   {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,0,1,1,1,0}}; 
 byte pp[8][6]={   {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}}; 
 byte qq[8][6]={   {0,0,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,1,0,1}, 
                 {0,1,0,0,1,1}, 
                 {0,0,1,1,1,0}}; 
 byte rr[8][6]={   {0,1,1,1,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,1,1,1,0}, 
                 {0,1,0,0,1,0}, 
                 {0,1,0,0,1,0}, 
                 {0,1,0,0,0,1}}; 
 byte ss[8][6]={   {0,0,1,1,1,1}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,0,1,1,1,0}, 
                 {0,0,0,0,0,1}, 
                 {0,0,0,0,0,1}, 
                 {0,1,1,1,1,0}}; 
 byte tt[8][6]={   {0,1,1,1,1,1}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}}; 
 byte uu[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,0,1,1,1,0}}; 
 byte vv[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,0,1,0,1,0}, 
                 {0,0,0,1,0,0}}; 
 byte ww[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,1,0,1}, 
                 {0,1,1,0,1,1}, 
                 {0,1,0,0,0,1}}; 
 byte xx[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,0,1,0,1,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,1,0,1,0}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}}; 
 byte yy[8][6]={   {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,1,0,0,0,1}, 
                 {0,0,1,0,1,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,0,1,0,0}}; 
 byte zz[8][6]={   {0,1,1,1,1,1}, 
                 {0,0,0,0,0,1}, 
                 {0,0,0,0,0,1}, 
                 {0,0,0,0,1,0}, 
                 {0,0,0,1,0,0}, 
                 {0,0,1,0,0,0}, 
                 {0,1,0,0,0,0}, 
                 {0,1,1,1,1,1}}; 
 byte esp[8][6]={ {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}, 
                 {0,0,0,0,0,0}}; 
byte matriz[12][236]; 
  
  
 Adafruit_NeoPixel f0 = Adafruit_NeoPixel(NUMPIXELS,22,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f1 = Adafruit_NeoPixel(NUMPIXELS,24,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f2 = Adafruit_NeoPixel(NUMPIXELS,26,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f3 = Adafruit_NeoPixel(NUMPIXELS,28,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f4 = Adafruit_NeoPixel(NUMPIXELS,30,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f5 = Adafruit_NeoPixel(NUMPIXELS,32,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f6 = Adafruit_NeoPixel(NUMPIXELS,34,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f7 = Adafruit_NeoPixel(NUMPIXELS,36,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f8 = Adafruit_NeoPixel(NUMPIXELS,38,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f9 = Adafruit_NeoPixel(NUMPIXELS,40,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f10 = Adafruit_NeoPixel(NUMPIXELS,42,NEO_RGB+NEO_KHZ800); 
 Adafruit_NeoPixel f11 = Adafruit_NeoPixel(NUMPIXELS,44,NEO_RGB+NEO_KHZ800); 
  
 void conversion(String str){ 
   str.toCharArray(palabra, str.length()+1); 
   if(mode==1){     
     for(int i=0; i<str.length(); i++){ 
       if(palabra[i]==abc[0] or palabra[i]==ABC[0]){imprimir(aa, str.length()); 
       }else if(palabra[i]==abc[1] or palabra[i]==ABC[1]){imprimir(bb, str.length()); 
       }else if(palabra[i]==abc[2] or palabra[i]==ABC[2]){imprimir(cc, str.length()); 
       }else if(palabra[i]==abc[3] or palabra[i]==ABC[3]){imprimir(dd, str.length()); 
       }else if(palabra[i]==abc[4] or palabra[i]==ABC[4]){imprimir(ee, str.length()); 
       }else if(palabra[i]==abc[5] or palabra[i]==ABC[5]){imprimir(ff, str.length()); 
       }else if(palabra[i]==abc[6] or palabra[i]==ABC[6]){imprimir(gg, str.length()); 
       }else if(palabra[i]==abc[7] or palabra[i]==ABC[7]){imprimir(hh, str.length()); 
       }else if(palabra[i]==abc[8] or palabra[i]==ABC[8]){imprimir(ii, str.length()); 
       }else if(palabra[i]==abc[9] or palabra[i]==ABC[9]){imprimir(jj, str.length()); 
       }else if(palabra[i]==abc[10] or palabra[i]==ABC[10]){imprimir(kk, str.length()); 
       }else if(palabra[i]==abc[11] or palabra[i]==ABC[11]){imprimir(ll, str.length()); 
       }else if(palabra[i]==abc[12] or palabra[i]==ABC[12]){imprimir(mm, str.length()); 
       }else if(palabra[i]==abc[13] or palabra[i]==ABC[13]){imprimir(nn, str.length()); 
       }else if(palabra[i]==abc[14] or palabra[i]==ABC[14]){imprimir(oo, str.length()); 
       }else if(palabra[i]==abc[15] or palabra[i]==ABC[15]){imprimir(pp, str.length()); 
       }else if(palabra[i]==abc[16] or palabra[i]==ABC[16]){imprimir(qq, str.length()); 
       }else if(palabra[i]==abc[17] or palabra[i]==ABC[17]){imprimir(rr, str.length()); 
       }else if(palabra[i]==abc[18] or palabra[i]==ABC[18]){imprimir(ss, str.length()); 
       }else if(palabra[i]==abc[19] or palabra[i]==ABC[19]){imprimir(tt, str.length()); 
       }else if(palabra[i]==abc[20] or palabra[i]==ABC[20]){imprimir(uu, str.length()); 
       }else if(palabra[i]==abc[21] or palabra[i]==ABC[21]){imprimir(vv, str.length()); 
       }else if(palabra[i]==abc[22] or palabra[i]==ABC[22]){imprimir(ww, str.length()); 
       }else if(palabra[i]==abc[23] or palabra[i]==ABC[23]){imprimir(xx, str.length()); 
       }else if(palabra[i]==abc[24] or palabra[i]==ABC[24]){imprimir(yy, str.length()); 
       }else if(palabra[i]==abc[25] or palabra[i]==ABC[25]){imprimir(zz, str.length()); 
       } 
     } 
   }
   
 }  
  
 void imprimir(byte m[8][6], int digitos){ 
   if(contE<digitos *6){ 
     for(int j=0; j<6 ; j++){ 
       for(int i=0; i<8 ; i++){ 
         matriz[i+2][j+contE]=m[i][j]; 
       } 
     } 
     contE=contE+6; 
   } 
 } 
  
 void manejoLed(int lar){ 
   int a = 0;int b = 0;int c = 127; 
   int d = 0;int e = 0;int f = 0; 
   int largo = lar+1; 
   if(lar>9){ 
       for(int j=0; j<59; j++){ 
         if(colmI+j-largo*6>=0){ 
           if(matriz[0][colmI+j-largo*6]==1){f0.setPixelColor(j,f0.Color(a,b,c));f0.show();} 
           if(matriz[1][colmI+j-largo*6]==1){f1.setPixelColor(j,f1.Color(a,b,c));f1.show();} 
           if(matriz[2][colmI+j-largo*6]==1){f2.setPixelColor(j,f2.Color(a,b,c));f2.show();} 
           if(matriz[3][colmI+j-largo*6]==1){f3.setPixelColor(j,f3.Color(a,b,c));f3.show();} 
           if(matriz[4][colmI+j-largo*6]==1){f4.setPixelColor(j,f4.Color(a,b,c));f4.show();} 
           if(matriz[5][colmI+j-largo*6]==1){f5.setPixelColor(j,f5.Color(a,b,c));f5.show();} 
           if(matriz[6][colmI+j-largo*6]==1){f6.setPixelColor(j,f6.Color(a,b,c));f6.show();} 
           if(matriz[7][colmI+j-largo*6]==1){f7.setPixelColor(j,f7.Color(a,b,c));f7.show();} 
           if(matriz[8][colmI+j-largo*6]==1){f8.setPixelColor(j,f8.Color(a,b,c));f8.show();} 
           if(matriz[9][colmI+j-largo*6]==1){f9.setPixelColor(j,f9.Color(a,b,c));f9.show();} 
           if(matriz[10][colmI+j-largo*6]==1){f10.setPixelColor(j,f10.Color(a,b,c));f10.show();} 
           if(matriz[11][colmI+j-largo*6]==1){f11.setPixelColor(j,f11.Color(a,b,c));f10.show();} 
         }   
         if(colmI+j>=0 and colmI<lar*6){ 
           if(matriz[0][colmI+j]==1){f0.setPixelColor(j,f0.Color(a,b,c));f0.show();} 
           if(matriz[1][colmI+j]==1){f1.setPixelColor(j,f1.Color(a,b,c));f1.show();} 
           if(matriz[2][colmI+j]==1){f2.setPixelColor(j,f2.Color(a,b,c));f2.show();} 
           if(matriz[3][colmI+j]==1){f3.setPixelColor(j,f3.Color(a,b,c));f3.show();} 
           if(matriz[4][colmI+j]==1){f4.setPixelColor(j,f4.Color(a,b,c));f4.show();} 
           if(matriz[5][colmI+j]==1){f5.setPixelColor(j,f5.Color(a,b,c));f5.show();} 
           if(matriz[6][colmI+j]==1){f6.setPixelColor(j,f6.Color(a,b,c));f6.show();} 
           if(matriz[7][colmI+j]==1){f7.setPixelColor(j,f7.Color(a,b,c));f7.show();} 
           if(matriz[8][colmI+j]==1){f8.setPixelColor(j,f8.Color(a,b,c));f8.show();} 
           if(matriz[9][colmI+j]==1){f9.setPixelColor(j,f9.Color(a,b,c));f9.show();} 
           if(matriz[10][colmI+j]==1){f10.setPixelColor(j,f10.Color(a,b,c));f10.show();} 
           if(matriz[11][colmI+j]==1){f11.setPixelColor(j,f11.Color(a,b,c));f10.show();} 
         }    
       }colmI++; 
       if(colmI>largo*6){ 
         colmI=1;  
       } 
   }else{ 
       for(int j=0; j<59; j++){ 
           if(matriz[0][j]==1){f0.setPixelColor(j+29-lar*3,f0.Color(a,b,c));f0.show();} 
           if(matriz[1][j]==1){f1.setPixelColor(j+29-lar*3,f1.Color(a,b,c));f1.show();} 
           if(matriz[2][j]==1){f2.setPixelColor(j+29-lar*3,f2.Color(a,b,c));f2.show();} 
           if(matriz[3][j]==1){f3.setPixelColor(j+29-lar*3,f3.Color(a,b,c));f3.show();} 
           if(matriz[4][j]==1){f4.setPixelColor(j+29-lar*3,f4.Color(a,b,c));f4.show();} 
           if(matriz[5][j]==1){f5.setPixelColor(j+29-lar*3,f5.Color(a,b,c));f5.show();} 
           if(matriz[6][j]==1){f6.setPixelColor(j+29-lar*3,f6.Color(a,b,c));f6.show();} 
           if(matriz[7][j]==1){f7.setPixelColor(j+29-lar*3,f7.Color(a,b,c));f7.show();} 
           if(matriz[8][j]==1){f8.setPixelColor(j+29-lar*3,f8.Color(a,b,c));f8.show();} 
           if(matriz[9][j]==1){f9.setPixelColor(j+29-lar*3,f9.Color(a,b,c));f9.show();} 
           if(matriz[10][j]==1){f10.setPixelColor(j+29-lar*3,f10.Color(a,b,c));f10.show();} 
           if(matriz[11][j]==1){f11.setPixelColor(j+29-lar*3,f11.Color(a,b,c));f10.show();} 
       } 
     } 
   delay(50); 
 }  

 void limpiarmatriz(){
  f0.setBrightness(0);
  f1.setBrightness(0);
  f2.setBrightness(0);
  f3.setBrightness(0);
  f4.setBrightness(0);
  f5.setBrightness(0);
  f6.setBrightness(0);
  f7.setBrightness(0);
  f8.setBrightness(0);
  f9.setBrightness(0);
  f10.setBrightness(0);
  f11.setBrightness(0);
 
 }
 void alumbrar(){
   f0.setBrightness(128);
  f1.setBrightness(128);
  f2.setBrightness(128);
  f3.setBrightness(128);
  f4.setBrightness(128);
  f5.setBrightness(128);
  f6.setBrightness(128);
  f7.setBrightness(128);
  f8.setBrightness(128);
  f9.setBrightness(128);
  f10.setBrightness(128);
  f11.setBrightness(128);
 }
 void limpiarled(){ 
 //  int a = 200;int b = 200;int c = 170; 
   int a = 0;int b = 0;int c = 0;   
   f0.fill(f0.Color(a,b,c),0,NUMPIXELS); 
   f1.fill(f1.Color(a,b,c),0,NUMPIXELS); 
   f2.fill(f2.Color(a,b,c),0,NUMPIXELS); 
   f3.fill(f3.Color(a,b,c),0,NUMPIXELS); 
   f4.fill(f4.Color(a,b,c),0,NUMPIXELS); 
   f5.fill(f5.Color(a,b,c),0,NUMPIXELS); 
   f6.fill(f6.Color(a,b,c),0,NUMPIXELS); 
   f7.fill(f7.Color(a,b,c),0,NUMPIXELS); 
   f8.fill(f8.Color(a,b,c),0,NUMPIXELS); 
   f9.fill(f9.Color(a,b,c),0,NUMPIXELS); 
   f10.fill(f10.Color(a,b,c),0,NUMPIXELS); 
   f11.fill(f11.Color(a,b,c),0,NUMPIXELS); 
 } 
  
 void setup() { 
   Serial.begin(115200); 
   //pinMode(Senal,INPUT);
   f0.begin();f1.begin();f2.begin();f3.begin();f4.begin();f5.begin();f6.begin();f7.begin();f8.begin();f9.begin();f10.begin();f11.begin(); 
   f0.show();f1.show();f2.show();f3.show();f4.show();f5.show();f6.show();f7.show();f8.show();f9.show();f10.show();f11.show();  
   pinMode(4, INPUT);
 }   
  
 void loop() { 
   int Senal =digitalRead(4);
   if(Senal==HIGH){
     Serial.println('H');
     alumbrar();
     delay(500);
    mode =1; 
    switch(mode){ 
     case 1:
         asd = "Encendido";   
         conversion(asd); 
         manejoLed(asd.length());
         if(asd.length()>9){ 
           limpiarled(); 
         }
        break;
      case 2:
      break;
   }
      
   }else{
    f0.begin();f1.begin();f2.begin();f3.begin();f4.begin();f5.begin();f6.begin();f7.begin();f8.begin();f9.begin();f10.begin();f11.begin();
    limpiarmatriz();
    f0.show();f1.show();f2.show();f3.show();f4.show();f5.show();f6.show();f7.show();f8.show();f9.show();f10.show();f11.show();
    Serial.println('L');
    Serial.println('L');
    //Serial.println('J');
    delay(500);
    
   }
}