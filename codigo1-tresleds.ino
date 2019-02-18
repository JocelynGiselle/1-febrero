#define LED1 8
#define LED2 9
#define LED3 10

void setup() {

 pinMode(LED1, OUTPUT);  
 pinMode(LED2, OUTPUT);  
 pinMode(LED3, OUTPUT);  

}

void loop() {
  
 digitalWrite(LED1, HIGH); 
 delay(500);
 digitalWrite(LED1, LOW);    
 delay(500); 
 digitalWrite(LED2, LOW); 
 delay(500);
  
}
