# Food-Spoilage-Detection-Device-using-iot
# Food-Spoilage-Detection-using-iot

Objective
The food we take can affect in any form of impurity that may happen due to storage or chemical changes within the food, also detect pesticides are affected or not (These residues used above the Maximum Residue Limit (MRL) can cause severe health problems). This project is discussed to solve the food spoilage through sensors by continuously sensing the signals from the food and 
by displaying the PH value of methane on the LCD panel with buzzer and LED and also sends the alert message to the registered mobile number.

Components Required

1)Arduino Uno
2)MQ4 Methane Gas Sensor
3)ESP8266 Wi-Fi Module
4)16x2 LCD DISPLAY
5)Buzzer
6)LED


Working Principles:
• This system is implemented by the combination of hardware components. 
All the hardware components are assembled in the implementation phase.
• Choose appropriate sensors to detect indicators of food spoilage.
• Temperature sensors (DHT11) to monitor temperature changes and 
Humidity sensors (DHT11) to monitor moisture levels.
• Gas sensors (MQ-4) to detect gases emitted during spoilage, such as 
ammonia, ethylene, or volatile organic compounds (VOCs), and also detect 
pesticides are affected or not.
• Connect the selected sensors to the microcontroller and collect data from 
the sensors and process it.
• connect the device to the internet. This enables remote monitoring and data 
transmission then choose a cloud platform like AWS to store and analyze 
the collected data.
• The proposed system is based on Arduino UNO which is a recognized 
prototyping board which is interfaced with gas sensors like MQ4 to 
distinguish smell.
• The microcontroller board Arduino Uno along with food detection sensor 
MQ4 sense the gases coming out from the rotten food. The signal is 
transferred through a Wi-Fi device ESP 8266 AS. The signals are sent to 
the user through a server.
• After signals are sent to the server, collected datas are sent to the user’s 
mobile phone via SMS or Email.
• The buzzer, LED and LCD panel will also show the output from the sensor 
which is connected with the Arduino board.


Conclusion
 The early detection of the gases from different food items like ammonia, 
methane etc. can help the gas sensor to detect gas emission from food items even 
before the presence of any visible sign of spoilage. The consumer gets the 
information about the food item wherein he can monitor the perish ability of that 
food item. This will help in maintenance of health and prevents the consumer 
from consuming bad food. The monitoring and detection of the food items is very 
necessary as most of the consumers buy packed food from the malls wherein date 
of expiry is important parameter.
