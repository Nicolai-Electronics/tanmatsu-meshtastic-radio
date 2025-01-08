//#define SDA 6
//#define SCL 7
//#define I2C_SDA SDA
//#define I2C_SCL SCL

#define USE_RF95
#define LORA_SCK 0
#define LORA_MISO 3
#define LORA_MOSI 2
#define LORA_CS 1

#define LORA_DIO0 -1
#define LORA_DIO1 4
#define LORA_DIO4 5
#define LORA_RESET 9

#define USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 5
#define SX126X_RESET LORA_RESET

#define SX126X_DIO2_AS_RF_SWITCH // use DIO2 as RF switch
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
