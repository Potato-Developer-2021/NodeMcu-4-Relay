
#ifndef __CONFIGFILE__
#define __CONFIGFILE__
//flag for saving data
bool shouldSaveConfig = false;
char wifi_ssid[34] = "";
char wifi_password[34] = "";
char mqtt_server[40] ="shadoofpertanian.pptik.id";
int mqtt_port = 1883;
char smqtt_port[5] = "1883";
char mqtt_user[40] = "/shadoofpertanian:shadoofpertanian";
char mqtt_password[40] = "TaniBertani19";
const long interval = 2000;

uint8_t MAC_array[6];
char MAC_char[18]; 
WiFiClient espClient;
PubSubClient client(espClient);


//MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance

void SaveConfigCallback ();
void ReadConfigFile();

#endif
