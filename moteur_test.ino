/*************************************************************
Deplacement du robot 
Anthony et Paul
Projet Robotino
*************************************************************/
const int direction = 12;
const int frein = 9;
const int vitesse = 3;
void setup() {
  //A
  pinMode(direction, OUTPUT); //Direction du moteur
  pinMode(frein, OUTPUT); //Frein du moteur
  
}

void loop(){
  

  digitalWrite(direction, HIGH); 
  digitalWrite(frein, LOW);   
  analogWrite(vitesse, 255);   
  
  delay(3000);
  
}
