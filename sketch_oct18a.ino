#include <SPI.h>
#include <Ethernet.h>
byte mac[] = {0xDE, 0xAD, 0XBE, 0xE2, 0XF1, 0xED}
IPAdress ip (10,10,15,8);

EthernetServer server (80);
String HTTP_reg;

int indl = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while (!Serial) {
}

Ethernet.begin(mac, ip);
server.begin();
Serial.print("IP Server");
Serial.println(Ethernet.localIP());
pinMode(2,INPUT_PULLUP);
digitalWrite(2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
ind1 _digitalRead(2);

EthernetClient client = server.available();
if (client)  {
Serial.println("new client");
boolean currentLineIsBlank = true;
while (clientconnected())  {
char c = client.read();
HTTP_req += c;
Serial.write(c);
if (c == '\n' && currentLineIsBlank  )  {
client.println  (HTTP//1.1 200 OK");
client.println  ("Content-Type: text/hmtl");
client.println  ("Connection: close");
client.println  ("Refresh; 5");
client.println  ();
client.println  ("<!DOCTYPE HTML>");
client.println  ("<html>");
client.println  ("</H1>");
client.println  ("<br />");
client.println  ("Indikator1 : ");
client.println  ("ind1");
client.println  ("<br />");
client.println  ("<br />");

client.println ("</html>");
HTTP_req = "";
break;
}
if (c == '\n') {
  currentLineIsBlank = true;
}
else if (c != '\r') {
  currentLineIsBlank = true;
}
else if (c != '\r') {
  currentLineIsBlank = false;
}
}
}
delay(100);
client.stop();
Serial.println("client disconnected")
}
}














}
