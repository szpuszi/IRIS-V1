// ALPHA VERSION, NOT FULLY WORKING

#include <avr/sleep.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h> 

const int IR_LED = 0;   // Pin 5 (PB0)
const int BUTTON = 7;   // Pin 7 (PB2)

void pulseIR(long microSeconds) {
  while (microSeconds > 0) {
    digitalWrite(IR_LED, HIGH);
    delayMicroseconds(13);  
    digitalWrite(IR_LED, LOW);
    delayMicroseconds(13);  
    microSeconds -= 26;
  }
}

void setup() {
  pinMode(IR_LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void sendRaw(const uint16_t* signal, int len) {
  for (int i = 0; i < len; i++) {
    uint16_t duration = pgm_read_word(&signal[i]);
    if (i % 2 == 0) {
      pulseIR(duration);
    } else {
      delayMicroseconds(duration);
    }
  }
}

const uint16_t PROGMEM nec_power[] = {9000, 4500, 560, 560, 560, 1690, 560, 560}; 
const uint16_t PROGMEM sony_power[] = {2400, 600, 1200, 600, 600, 600, 1200, 600};

void goToSleep() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  GIMSK |= (1 << PCIE);
  PCMSK |= (1 << PCINT2);
  sei();
  sleep_cpu();
  sleep_disable();
  cli();
}

ISR(PCINT0_vect) {}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    
    sendRaw(nec_power, sizeof(nec_power) / 2);
    delay(100);
    
    sendRaw(sony_power, sizeof(sony_power) / 2);
    
    delay(500);
    while(digitalRead(BUTTON) == LOW);
  }
  
  goToSleep();
}