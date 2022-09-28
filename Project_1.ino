#define sw 12
#define Red 8
#define yellow 7
#define Green 4
int c=0;
void setup() {
  // put your setup code here, to run once:
pinMode(sw,INPUT);
pinMode(Red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(Green,OUTPUT);
digitalWrite(sw,HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(c==0){
    digitalWrite(Red,HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(Green,LOW);
    delay(1000);
    
  }if(c==1){
    digitalWrite(yellow,HIGH);
    digitalWrite(Red,LOW);
    digitalWrite(Green,LOW);
    delay(1000);
   
  }if(c==2){
    digitalWrite(Green,HIGH);
    digitalWrite(Red,LOW);
    digitalWrite(yellow,LOW);
    delay(1000);
 
  }else{
    digitalWrite(Red,LOW);
     digitalWrite(yellow,LOW);
     digitalWrite(Green,LOW);}
  if(digitalRead(sw)==LOW){
    c++;
    if(c>2) c=0;
    }
  
}
