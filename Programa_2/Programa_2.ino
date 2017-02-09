/************************************************************************
**                                                                     **
**                       TITOL: Nom amb 7 segement                     **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 12/01/2017  **
************************************************************************/

//****************************INCLUDE ***********************************

//*************************** VARIABLES *********************************
const int segA = 5;          
const int segB = 6;         
const int segC = 7;          
const int segD = 8;          
const int segE = 9;          
const int segF = 10;        
const int segG = 11;         
const int buttonPin = 2;    
boolean buttonEstat = LOW;   

int num = 0;                 

//**************************** SERUP ************************************


void setup() {
  pinMode(segA, OUTPUT);     
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);     
  pinMode(segF, OUTPUT);     
  pinMode(segG, OUTPUT);     
  pinMode(buttonPin, INPUT);      
  
  digitalWrite(segA, LOW);     
  digitalWrite(segB, LOW);    
  digitalWrite(segC, LOW);    
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);     
  digitalWrite(segG, LOW);      
}

//******************************LOOP*************************************


void loop()                        //inicia el bucle del probrama void loop() 
{
 delay(500);    // per evitar que en una pulsació curta salti més d'un número
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = num + 1;              // incrementar el número a mostrar
    if (num == 10) num = 0;     // si s'ha superat 9 tornar a 0     
  }
  switch(num)
  {
    case 0:
      digitalWrite(segA, HIGH);  
      digitalWrite(segB, HIGH);     
      digitalWrite(segC, HIGH);     
      digitalWrite(segD, HIGH);     
      digitalWrite(segE, HIGH); 
      digitalWrite(segF, HIGH);    
      digitalWrite(segG, LOW);    
      break;
    case 1:   
      digitalWrite(segA, LOW);            
      digitalWrite(segD, LOW);     
      digitalWrite(segE, LOW);     
      digitalWrite(segF, LOW);    
      break;
    case 2:  
      digitalWrite(segA, HIGH);     
      digitalWrite(segC, LOW);     
      digitalWrite(segD, HIGH);     
      digitalWrite(segE, HIGH);     
      digitalWrite(segG, HIGH);   
      break;  
    case 3:        
      digitalWrite(segC, HIGH);      
      digitalWrite(segE, LOW);    
      break;  
    case 4:   
      digitalWrite(segA, LOW);    
      digitalWrite(segD, LOW);     
      digitalWrite(segF, HIGH);  
      break;  
    case 5:        
      digitalWrite(segA, HIGH);    
      digitalWrite(segB, LOW); 
      digitalWrite(segD, HIGH);  
      break;  
    case 6:            
      digitalWrite(segA, LOW);       
      digitalWrite(segE, HIGH);    
      break;  
    case 7:             
      digitalWrite(segA, HIGH);  
      digitalWrite(segB, HIGH);  
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);    
      break;  
    case 8:          
      digitalWrite(segD, HIGH);   // número 8  
      digitalWrite(segE, HIGH); 
      digitalWrite(segF, HIGH);    
      digitalWrite(segG, HIGH);   // segments ON: A, B, C, D, E, F i G
      break;  
    case 9:            
      digitalWrite(segD, LOW);    // número 9
      digitalWrite(segE, LOW);    // segments ON: A, B, C, F i G
      break;  
  }    
}



//****************************** FUNCIONES ******************************}
