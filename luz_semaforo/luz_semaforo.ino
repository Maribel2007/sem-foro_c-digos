//LARA(esquerdo)
#define LED_VERMELHO 26
#define LED_AMARELO 27
#define LED_VERDE 14

//CLARA(direito)
#define led_vermelho 5
#define led_amarelo 19
#define led_verde 18

void setup() {
pinMode(LED_VERMELHO, OUTPUT);
pinMode(LED_AMARELO, OUTPUT);
pinMode(LED_VERDE, OUTPUT);
//
pinMode(led_vermelho, OUTPUT);
pinMode(led_amarelo , OUTPUT);
pinMode(led_verde, OUTPUT);

}

void loop() {
  digitalWrite(LED_VERMELHO, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(3000);

  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(3000);

  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(led_vermelho, HIGH);
  delay(3000);

  digitalWrite(led_amarelo, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(3000);

  
  digitalWrite(led_vermelho, LOW);
  digitalWrite(LED_AMARELO, LOW);
}
