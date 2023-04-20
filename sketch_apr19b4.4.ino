void setup()
{
  pinMode(3, OUTPUT);  
  pinMode(8,  INPUT);   
  pinMode(9,  INPUT);   
 
}

void loop()
{
  noTone(3);  
  
  if (digitalRead(8)==HIGH) 
  {
  
    
     tone(3, 246.94,1000); 
  delay(900);
  tone(3, 261.63,1000); 
  delay(800);
  tone(3, 293.66,1000); 
  delay(500);
  tone(3, 293.66,1000); 
  delay(500);
  tone(3, 261.63,1000); 
  delay(500);
  tone(3, 246.94,1000); 
  delay(500);
  tone(3, 220.00,1000); 
  delay(500);
    tone(3, 196.00,1000); 
  delay(500);
  tone(3,196.00,1000); 
  delay(500);
  tone(3, 220.00,1000); 
  delay(500);
  tone(3, 246.94,1000); 
  delay(500);
  tone(3, 246.94,1000); 
  delay(500);
  tone(3, 220.00,1000); 
  delay(500);
    tone(3, 233.08,1000);
  delay(500);
 
    
    
  }
  
  
  if (digitalRead(9)==HIGH)
  {
  tone(3, 523.25,4000);
  delay(400);
  
  tone(3, 587.33,4000);
  delay(400);
    tone(3, 659.26,4000);
  delay(400);
    tone(3, 523.25,2000);
  delay(200);
  noTone(3);
    delay(200);
  
  tone(3, 523.25,4000);
  delay(400);
  
  tone(3, 587.33,4000);
  delay(400);
    tone(3, 659.26,4000);
  delay(400);
    tone(3, 523.25,2000);
  delay(200);
  noTone(3);
    delay(200);
  
  
  tone(3, 659.26,4000);
  delay(400);
  
  tone(3, 698.46,4000);
  delay(400);
    tone(3, 783.99,4000);
  delay(400);
     noTone(3);
    delay(300);
  
  tone(3, 659.26,4000);
  delay(400);
  
  tone(3, 698.46,4000);
  delay(400);
    tone(3, 783.99,4000);
  delay(400);
  noTone(3);
    delay(300);       
    
    
   tone(3, 783.99,2000);
  delay(200);
     tone(3, 880,2000);
  delay(200);
    tone(3, 783.99,2000);
  delay(200);
     tone(3, 698.46,2000);
  delay(200);
  
  tone(3, 659.26,4000);
  delay(400);
  tone(3, 523.25,2000);
  delay(200);
  noTone(3);
    delay(300);  
  
      
   tone(3, 783.99,2000);
  delay(200);
     tone(3, 880,2000);
  delay(200);
    tone(3, 783.99,2000);
  delay(200);
     tone(3, 698.46,2000);
  delay(200);  
  
  tone(3, 659.26,4000);
  delay(400);
  tone(3, 523.25,2000);
  delay(200);
  noTone(3);
    delay(300);   
  
  tone(3, 587.33,4000);
  delay(400);
   tone(3,196.00,1000); 
    delay(400);
    tone(3, 523.25,4000);
  delay(400);
     noTone(3);
    delay(400);  
    
    tone(3, 587.33,4000);
  delay(400);
   tone(3,196.00,1000); 
    delay(400);
    tone(3, 523.25,4000);
  delay(400);
  }
  
}