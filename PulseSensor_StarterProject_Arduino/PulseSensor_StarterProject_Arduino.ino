//  Variables
int PulseSensorPurplePin = 0;        // Pulse Sensor PURPLE WIRE connected to ANALOG PIN 0
int LED13 = 13;   //  The on-board Arduion LED


int Signal;                // holds the incoming raw data. Signal value can range from 0-1024
int Threshold_amp = 550;            // Determine which Signal to "count as a beat", and which to ingore. 
int Threshold_freq;
int event = 0;


// The SetUp Function:
void setup() {
  pinMode(LED13,OUTPUT);         // pin that will blink to your heartbeat!
   Serial.begin(9600);         // Set's up Serial Communication at certain speed. 
   
}

// The Main Loop Function
void loop() {

  Signal = analogRead(PulseSensorPurplePin);  // Read the PulseSensor's value. 
                                              // Assign this value to the "Signal" variable.

   Serial.println(Signal);                    // Send the Signal value to Serial Plotter.

   
   if(Signal > Threshold_amp){                          // If the signal is above "550", then "turn-on" Arduino's on-Board LED.  
     digitalWrite(LED13,HIGH);          
   } else {
     digitalWrite(LED13,LOW);                //  Else, the sigal must be below "550", so "turn-off" this LED.
   }

   // TODO: write frequency function, set event to active if frequency is above Threshold_freq


delay(10);
   
   
}




