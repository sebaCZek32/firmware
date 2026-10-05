#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#ifndef DEVICE_NAME
#define DEVICE_NAME "S3-ILI9341"
#endif

// =============================================
// USB
// =============================================
#define USB_VID 0x303a
#define USB_PID 0x1001

// =============================================
// UART0
// =============================================
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// =============================================
// I2C Bus (wolny, domyslne piny S3)
// =============================================
#define GROVE_SDA 8
#define GROVE_SCL 9
#define SYS_I2C_SDA GROVE_SDA
#define SYS_I2C_SCL GROVE_SCL
static const uint8_t SDA = GROVE_SDA;
static const uint8_t SCL = GROVE_SCL;

// =============================================
// Glowna magistrala SPI (wspolna: ekran + dotyk + SD + moduly)
// =============================================
#define SPI_SCK_PIN 12
#define SPI_MOSI_PIN 11
#define SPI_MISO_PIN 13
#define SPI_SS_PIN 10

static const uint8_t SS = SPI_SS_PIN;
static const uint8_t MOSI = SPI_MOSI_PIN;
static const uint8_t SCK = SPI_SCK_PIN;
static const uint8_t MISO = SPI_MISO_PIN;

// =============================================
// Karta SD (SPI, wspolna magistrala z ekranem)
// =============================================
#define SDCARD_CS 21
#define SDCARD_SCK SPI_SCK_PIN
#define SDCARD_MISO SPI_MISO_PIN
#define SDCARD_MOSI SPI_MOSI_PIN

// =============================================
// CC1101 (opcjonalny modul, wspolna magistrala SPI)
// =============================================
#define USE_CC1101_VIA_SPI
#define CC1101_GDO0_PIN 17
#define CC1101_SS_PIN 16
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

// =============================================
// NRF24L01 (opcjonalny modul, wspolna magistrala SPI)
// =============================================
#define USE_NRF24_VIA_SPI
#define NRF24_CE_PIN 18
#define NRF24_SS_PIN 38
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

// =============================================
// W5500 (nieuzywany)
// =============================================
#define USE_W5500_VIA_SPI
#define W5500_SS_PIN -1
#define W5500_MOSI_PIN SPI_MOSI_PIN
#define W5500_SCK_PIN SPI_SCK_PIN
#define W5500_MISO_PIN SPI_MISO_PIN
#define W5500_INT_PIN -1

// =============================================
// Wyswietlacz ILI9341 (SPI)
// =============================================
#define USER_SETUP_LOADED
#define ILI9341_DRIVER 1 // gdy kolory/obraz sa dziwne, sprobuj ILI9341_2_DRIVER
#define TFT_WIDTH 240
#define TFT_HEIGHT 320
#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS 10
#define TFT_DC 7
#define TFT_RST 6
#define TFT_BL 5
#define TFT_BACKLIGHT_ON HIGH
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000
// Jesli kolory sa odwrocone, odkomentuj:
// #define TFT_INVERSION_ON 1

// =============================================
// Ustawienia ekranu
// =============================================
#define HAS_SCREEN 1
#define ROTATION 1 // landscape 320x240
#define MINBRIGHT 1
#define BACKLIGHT 5

// =============================================
// Dotyk rezystancyjny XPT2046 (SPI, wspolna magistrala)
// =============================================
#define HAS_TOUCH 1
#define TOUCH_CS 14
#define TOUCH_IRQ 15

// =============================================
// Rozmiary czcionek
// =============================================
#define FP 1
#define FM 2
#define FG 3

// =============================================
// Przycisk BOOT
// =============================================
// Wylaczone: kolizja InputHandler() z main.cpp (obsluga wejscia robi dotyk w interface.cpp)
// #define HAS_BTN 1
// #define BTN_ALIAS "\"Boot\""
// #define BTN_PIN 0
// #define BTN_ACT LOW
// #define SEL_BTN 0

// =============================================
// Podczerwien (opcjonalnie, zewnetrzne)
// =============================================
#define TXLED 1
#define RXLED 2
#define LED_ON HIGH
#define LED_OFF LOW

#define IR_RX_PINS {{"GPIO1", 1}, {"GPIO2", 2}, {"GPIO4", 4}, {"GPIO8", 8}}

// =============================================
// RF (opcjonalnie, zewnetrzne)
// =============================================
#define RF_TX_PINS {{"GPIO1", 1}, {"GPIO2", 2}, {"GPIO4", 4}, {"GPIO8", 8}}
#define RF_RX_PINS {{"GPIO1", 1}, {"GPIO2", 2}, {"GPIO4", 4}, {"GPIO8", 8}}

// =============================================
// Serial (GPS)
// =============================================
#define SERIAL_TX 43
#define SERIAL_RX 44
#define GPS_SERIAL_TX SERIAL_TX
#define GPS_SERIAL_RX SERIAL_RX

// =============================================
// BadUSB (USB HID)
// =============================================
#define USB_as_HID 1
#define BAD_TX GROVE_SDA
#define BAD_RX GROVE_SCL

// =============================================
// Deep Sleep
// =============================================
#define DEEPSLEEP_WAKEUP_PIN 0
#define DEEPSLEEP_PIN_ACT LOW

#endif /* Pins_Arduino_h */
