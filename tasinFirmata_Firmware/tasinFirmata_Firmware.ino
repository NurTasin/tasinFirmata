//Project Tasin Firmata..
//A beginner's way to learn Arduino (Actually Arduino UNO)
//Copyright 2020 Nur Mahmud Ul Alam Tasin
//You can get updates of this firmware at :https://github.com/NurTasin/tasinFirmata.git
String command = "";
void setup() {
  Serial.begin(115200);
//  Serial.println("<<TASIN_FIRMATA>>");
}

void loop() {
  while (Serial.available() > 0) {
    char temp_ = Serial.read();
    command += temp_;
    delay(10);
    if (command.length() > 0) {
      if(command=="TASIN_FIRMATA_VER"){
        Serial.println("1.0.1 (beta)");
      }
      else if (command == "D2 HIGH") {
        pinMode(2, OUTPUT);
        digitalWrite(2, HIGH);
        Serial.println("D2 turned HIGH");
      }
      else if (command == "D2 LOW") {
        pinMode(2, OUTPUT);
        digitalWrite(2, LOW);
        Serial.println("D2 turned LOW");
      }
      else if (command == "D3 HIGH") {
        pinMode(3, OUTPUT);
        digitalWrite(3, HIGH);
        Serial.println("D3 turned HIGH");
      }
      else if (command == "D3 LOW") {
        pinMode(3, OUTPUT);
        digitalWrite(3, LOW);
        Serial.println("D3 turned LOW");
      }
      else if (command == "D4 HIGH") {
        pinMode(4, OUTPUT);
        digitalWrite(4, HIGH);
        Serial.println("D4 turned HIGH");
      }
      else if (command == "D4 LOW") {
        pinMode(4, OUTPUT);
        digitalWrite(4, LOW);
        Serial.println("D4 turned LOW");
      }
      else if (command == "D5 HIGH") {
        pinMode(5, OUTPUT);
        digitalWrite(5, HIGH);
        Serial.println("D5 turned HIGH");
      }
      else if (command == "D5 LOW") {
        pinMode(5, OUTPUT);
        digitalWrite(5, LOW);
        Serial.println("D5 turned LOW");
      }
      else if (command == "D6 HIGH") {
        pinMode(6, OUTPUT);
        digitalWrite(6, HIGH);
        Serial.println("D6 turned HIGH");
      }
      else if (command == "D6 LOW") {
        pinMode(6, OUTPUT);
        digitalWrite(6, LOW);
        Serial.println("D6 turned LOW");
      }
      else if (command == "D7 HIGH") {
        pinMode(7, OUTPUT);
        digitalWrite(7, HIGH);
        Serial.println("D7 turned HIGH");
      }
      else if (command == "D7 LOW") {
        pinMode(7, OUTPUT);
        digitalWrite(7, LOW);
        Serial.println("D7 turned LOW");
      }
      else if (command == "D8 HIGH") {
        pinMode(8, OUTPUT);
        digitalWrite(8, HIGH);
        Serial.println("D8 turned HIGH");
      }
      else if (command == "D8 LOW") {
        pinMode(8, OUTPUT);
        digitalWrite(8, LOW);
        Serial.println("D8 turned LOW");
      }
      else if (command == "D9 HIGH") {
        pinMode(9, OUTPUT);
        digitalWrite(9, HIGH);
        Serial.println("D9 turned HIGH");
      }
      else if (command == "D9 LOW") {
        pinMode(9, OUTPUT);
        digitalWrite(9, LOW);
        Serial.println("D9 turned LOW");
      }
      else if (command == "D10 HIGH") {
        pinMode(10, OUTPUT);
        digitalWrite(10, HIGH);
        Serial.println("D10 turned HIGH");
      }
      else if (command == "D10 LOW") {
        pinMode(10, OUTPUT);
        digitalWrite(10, LOW);
        Serial.println("D10 turned LOW");
      }
      else if (command == "D11 HIGH") {
        pinMode(11, OUTPUT);
        digitalWrite(11, HIGH);
        Serial.println("D11 turned HIGH");
      }
      else if (command == "D11 LOW") {
        pinMode(11, OUTPUT);
        digitalWrite(11, LOW);
        Serial.println("D11 turned LOW");
      }
      else if (command == "D12 HIGH") {
        pinMode(12, OUTPUT);
        digitalWrite(12, HIGH);
        Serial.println("D12 turned HIGH");
      }
      else if (command == "D12 LOW") {
        pinMode(12, OUTPUT);
        digitalWrite(12, LOW);
        Serial.println("D12 turned LOW");
      }
      else if (command == "D13 HIGH") {
        pinMode(13, OUTPUT);
        digitalWrite(13, HIGH);
        Serial.println("D13 turned HIGH");
      }
      else if (command == "D13 LOW") {
        pinMode(13, OUTPUT);
        digitalWrite(13, LOW);
        Serial.println("D13 turned LOW");
      }
      else if (command == "A0 READ") {
        pinMode(A0, INPUT);
        Serial.print("A0 Analog Value: ");
        Serial.println(analogRead(A0));
      }
      else if (command == "A1 READ") {
        pinMode(A1, INPUT);
        Serial.print("A1 Analog Value: ");
        Serial.println(analogRead(A1));
      }
      else if (command == "A2 READ") {
        pinMode(A2, INPUT);
        Serial.print("A2 Analog Value: ");
        Serial.println(analogRead(A2));
      }
      else if (command == "A3 READ") {
        pinMode(A3, INPUT);
        Serial.print("A3 Analog Value: ");
        Serial.println(analogRead(A3));
      }
      else if (command == "A4 READ") {
        pinMode(A4, INPUT);
        Serial.print("A4 Analog Value: ");
        Serial.println(analogRead(A4));
      }
      else if (command == "A5 READ") {
        pinMode(A5, INPUT);
        Serial.print("A5 Analog Value: ");
        Serial.println(analogRead(A5));
      }
      else if (command == "D2 READ") {
        pinMode(2, INPUT);
        Serial.print("D2 state: ");
        Serial.println(digitalRead(2));
      }
      else if (command == "D3 READ") {
        pinMode(3, INPUT);
        Serial.print("D3 state: ");
        Serial.println(digitalRead(3));
      }
      else if (command == "D4 READ") {
        pinMode(4, INPUT);
        Serial.print("D4 state: ");
        Serial.println(digitalRead(4));
      }
      else if (command == "D5 READ") {
        pinMode(5, INPUT);
        Serial.print("D5 state: ");
        Serial.println(digitalRead(5));
      }
      else if (command == "D6 READ") {
        pinMode(6, INPUT);
        Serial.print("D6 state: ");
        Serial.println(digitalRead(6));
      }
      else if (command == "D7 READ") {
        pinMode(7, INPUT);
        Serial.print("D7 state: ");
        Serial.println(digitalRead(7));
      }
      else if (command == "D8 READ") {
        pinMode(8, INPUT);
        Serial.print("D8 state: ");
        Serial.println(digitalRead(8));
      }
      else if (command == "D9 READ") {
        pinMode(9, INPUT);
        Serial.print("D9 state: ");
        Serial.println(digitalRead(9));
      }
      else if (command == "D10 READ") {
        pinMode(10, INPUT);
        Serial.print("D10 state: ");
        Serial.println(digitalRead(10));
      }
      else if (command == "D11 READ") {
        pinMode(11, INPUT);
        Serial.print("D11 state: ");
        Serial.println(digitalRead(11));
      }
      else if (command == "D12 READ") {
        pinMode(12, INPUT);
        Serial.print("D12 state: ");
        Serial.println(digitalRead(12));
      }
      else if (command == "D13 READ") {
        pinMode(13, INPUT);
        Serial.print("D13 state: ");
        Serial.println(digitalRead(13));
      }
    }
  }
  command = "";
}
