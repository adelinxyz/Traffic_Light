//Traffic Light 1 Pin Connection
//int TrafficColor#=Digital Pin on the arduino board
int carRed_1 = 12; 
int carYellow_1 = 11;
int carGreen_1 = 10;
int pedRed_1 = 9;
int pedGreen_1 = 8;


//Traffic Light 2 Pin Connection
//int TrafficColor#=Digital Pin on the arduino board
int carRed_2 = 13; 
int carYellow_2 = 7;
int carGreen_2 = 6;
int pedRed_2 = 5;
int pedGreen_2 = 4;




void setup() 
{ 
//Traffic Light 1 Setup
pinMode(carRed_1,OUTPUT);
pinMode(carYellow_1,OUTPUT);
pinMode(carGreen_1,OUTPUT);
pinMode(pedRed_1,OUTPUT);
pinMode(pedGreen_1,OUTPUT);
digitalWrite(carRed_1,LOW);
digitalWrite(pedGreen_1,LOW);
digitalWrite(carYellow_1,LOW);
digitalWrite(pedRed_1,LOW);
digitalWrite(carGreen_1,LOW);



//Traffic Light 2 Setup
pinMode(carRed_2,OUTPUT);
pinMode(carYellow_2,OUTPUT);
pinMode(carGreen_2,OUTPUT);
pinMode(pedRed_2,OUTPUT);
pinMode(pedGreen_2,OUTPUT);
digitalWrite(carRed_2,LOW);
digitalWrite(pedGreen_2,LOW);
digitalWrite(carYellow_2,LOW);
digitalWrite(pedRed_2,LOW);
digitalWrite(carGreen_2,LOW);
}





void loop() 
{
digitalWrite(carRed_1,LOW);
digitalWrite(carGreen_2,LOW);
digitalWrite(carYellow_1,HIGH);
digitalWrite(carYellow_2,HIGH);
delay (1500);
digitalWrite(carYellow_1,LOW);
digitalWrite(carYellow_2,LOW);
digitalWrite(carRed_2,HIGH);
digitalWrite(pedGreen_1,LOW);
digitalWrite(pedGreen_2,HIGH);
digitalWrite(pedRed_1,HIGH);
digitalWrite(pedRed_2,LOW);
digitalWrite(carGreen_1,HIGH);
delay(10000);

digitalWrite(carGreen_1,LOW);
digitalWrite(carRed_2,LOW); 
digitalWrite(carYellow_1,HIGH);
digitalWrite(carYellow_2,HIGH);  
delay(1500);
digitalWrite(carYellow_1,LOW); 
digitalWrite(carYellow_2,LOW); 
digitalWrite(carGreen_2,HIGH);
digitalWrite(carRed_1,HIGH);
digitalWrite(pedRed_1,LOW);
digitalWrite(pedGreen_2,LOW);
digitalWrite(pedRed_2,HIGH);  
digitalWrite(pedGreen_1,HIGH);
delay(10000);
