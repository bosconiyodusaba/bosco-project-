

int temppin=A0;
int fan=7;
int tempvalue=0;
int redled=2;
int yellowled=6;

void setup(){

 
  pinMode(7,OUTPUT);
  pinMode(temppin,INPUT);
 pinMode(2,OUTPUT);
 pinMode(6,OUTPUT);
Serial.begin(9600);
}
void loop(){
  
 tempvalue=analogRead(temppin);
 float tempcel= (tempvalue/1024.0)*500;
 float tempfarh= (tempcel*9)/5 + 32;
 if (tempcel>=25)
 {
  Serial.println("HIGH TEMPERATURE");
  Serial.println ("FAN IS ON ");
  digitalWrite(2,HIGH);
  digitalWrite(6,LOW); 
  digitalWrite(7,HIGH);
 

 }
    
   
   else {
    Serial.println ("LOW TEMPERATURE ");
     Serial.println("FAN IS OFF ");
  digitalWrite(2,LOW);
 digitalWrite(6,HIGH); 
 digitalWrite(7,LOW);
 

 
   }
   
  }
