int IN3 = 5;                // IN1 de L298N a pin digital 5
int IN4 = 4;                // IN2 de L298N a pin digital 4
int ENB = 3;                // ENA de L298N a pin digital 3
int IN1 = 6;                // IN1 de L298N a pin digital 6
int IN2 = 7;                // IN2 de L298N a pin digital 7
int ENA = 8;                // ENA de L298N a pin digital 8

void setup(){
  pinMode(IN1, OUTPUT);     // pin 6 como salida
  pinMode(IN2, OUTPUT);     // pin 7 como salida  
  pinMode(ENA, OUTPUT);     // pin 8 como salida
  pinMode(IN3, OUTPUT);     // pin 5 como salida
  pinMode(IN4, OUTPUT);     // pin 4 como salida  
  pinMode(ENB, OUTPUT);     // pin 3 como salida
}

void loop(){
  digitalWrite(ENA, HIGH);  // habilita motor A (giro en un sentido)
  digitalWrite(IN1, LOW);   // IN1 a 0
  digitalWrite(IN2, HIGH);  // IN2 a 1
  digitalWrite(ENB, HIGH);  // habilita motor A (giro en un sentido)
  digitalWrite(IN3, LOW);   // IN3 a 0
  digitalWrite(IN4, HIGH);  // IN4 a 
  delay(3000);              // demora de 3 seg.

  digitalWrite(ENA, LOW);   // ENA en 0 para deshabilitar motor
  digitalWrite(ENB, LOW);   // ENB en 0 para deshabilitar motor
  delay(2000);              // demora de 2 seg.

   digitalWrite(ENA, HIGH);  // habilita motor A (giro en un sentido)
  digitalWrite(IN1, HIGH);   // IN1 a 0
  digitalWrite(IN2, LOW);  // IN2 a 1
  digitalWrite(ENB, LOW);  // habilita motor A (giro en un sentido)
  digitalWrite(IN3, HIGH);   // IN3 a 0
  digitalWrite(IN4, LOW);  // IN4 a 
  delay(3000);              // demora de 3 seg.

  digitalWrite(ENA, LOW);   // ENA en 0 para deshabilitar motor
  digitalWrite(ENB, LOW);   // ENB en 0 para deshabilitar motor
  delay(2000);              // demora de 2 seg.
}
