// Definições dos pinos
int ldrPin = A0;     // Pino onde o LDR está conectado
int ledVerde = 2;    // LED Verde
int ledAmarelo = 3;  // LED Amarelo
int ledVermelho = 4;  // LED Vermelho
int buzzerPin = 5;   // Pino do buzzer

// Limites de luminosidade
int limiteOK = 50;       // Limite para estado OK
int limiteAlerta = 600;   // Limite para estado de alerta

void setup() {
  Serial.begin(9600);           // Inicia comunicação serial
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int luminosidade = analogRead(ldrPin);  // Lê o valor do LDR
  Serial.println(luminosidade);             // Para monitoramento serial

  // Verifica os níveis de luminosidade
  if (luminosidade <= limiteOK) {
    // Nível OK
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzerPin); // Desliga o buzzer
  } else if (luminosidade < limiteAlerta && luminosidade > limiteOK) {
    // Nível de alerta
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    tone(buzzerPin, 1000); // Soa o buzzer
    delay(3000);            // Mantém por 3 segundos
    noTone(buzzerPin);      // Desliga o buzzer
  } else {
    // Nível crítico
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzerPin, 1000); // Soa o buzzer
  }

  delay(500); // Pequena pausa antes da próxima leitura
}
