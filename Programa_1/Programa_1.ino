/************************************************************************
**                                                                     **
**                TITOL: 7 segement amb Pulsado                        **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 09/02/2017  **
************************************************************************/

//****************************INCLUDE ***********************************

//*************************** VARIABLES *********************************

int segA = 5;
int segB = 6;
int segC = 7;
int segD = 8;
int segE = 9;
int segF = 10;
int segG = 11; 
//**************************** SERUP ************************************

void setup()
{
  pinMode(segA, OUTPUT);     
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);     
  pinMode(segF, OUTPUT);     
  pinMode(segG, OUTPUT);  
   
  }   

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama void loop()  {
 //Y
   digitalWrite(segA, LOW);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, HIGH);     
   digitalWrite(segE, LOW); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);
  //A
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);

   //S
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, HIGH);     
   digitalWrite(segE, LOW); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);

    //S
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, HIGH);     
   digitalWrite(segE, LOW); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);

    //I
   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, LOW);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, LOW);  

  delay(1000);

    //N
   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, LOW);    
   digitalWrite(segG, HIGH);  

  delay(1000);

    //E
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, LOW);     
   digitalWrite(segD, HIGH);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);


    //_
   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, LOW);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, LOW); 
   digitalWrite(segF, LOW);    
   digitalWrite(segG, HIGH);  

  delay(1000);

    //H
   digitalWrite(segA, LOW);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);

      //A
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);

      //K
   digitalWrite(segA, LOW);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);
  
     //A
   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);     
   digitalWrite(segC, HIGH);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, HIGH);    
   digitalWrite(segG, HIGH);  

  delay(1000);
 
      //R
   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);     
   digitalWrite(segC, LOW);     
   digitalWrite(segD, LOW);     
   digitalWrite(segE, HIGH); 
   digitalWrite(segF, LOW);    
   digitalWrite(segG, HIGH);  

  delay(1000);
  }
  

//****************************** FUNCIONES ******************************}
