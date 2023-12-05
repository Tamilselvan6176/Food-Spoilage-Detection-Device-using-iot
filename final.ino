#include <LiquidCrystal.h>

#include <DHT.h>

#define DHT_PIN 9       // Pin where the DHT sensor is connected
#define DHT_TYPE DHT11  // Type of the DHT sensor (DHT22 or DHT11)
#define MQ_PIN A5       // Pin where the MQ gas sensor is connected
#define LED_PIN 11      // Pin for the LED
#define BUZZER_PIN 10  // Pin for the buzzer

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  //lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature();  // Read temperature from the DHT sensor
  float humidity = dht.readHumidity();        // Read humidity from the DHT sensor
  int gasValue = analogRead(MQ_PIN);         // Read gas value from the MQ gas sensor



  // Check for food spoilage based on conditions (you may need to adjust these)
  if ( gasValue > 200) {
    // Food spoilage detected, trigger LED, LCD, and buzzer
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);  // Activate buzzer
  
  } else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);  // Deactivate buzzer
  }

  // Print sensor data
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.print(" %, Gas Value: ");
  Serial.println(gasValue);

  delay(2000);  // Add a delay to avoid overwhelming the LCD and the serial output
}