#pragma once

/** SPI configurations, used for MicroSD Card on the Dock */
// Pins are defined in nrf52840_m2.h
#define SDC_SCK_PIN						NRF_GPIO_PIN_MAP(0, 6) ///< SDC serial clock (SCK) pin.
#define SDC_MOSI_PIN					NRF_GPIO_PIN_MAP(0, 17) ///< SDC serial data in (DI) pin.
#define SDC_MISO_PIN					NRF_GPIO_PIN_MAP(0, 8) ///< SDC serial data out (DO) pin.
#define SDC_CS_PIN						NRF_GPIO_PIN_MAP(0, 31) ///< SDC chip select (CS) pin.
#define APP_SDCARD_SPI_INSTANCE			0

/** SPI configurations, used for ILI9341 TFT controller */
#define ILI9341_SCK_PIN					NRF_GPIO_PIN_MAP(0, 11)
#define ILI9341_MISO_PIN				NRF_GPIO_PIN_MAP(1, 6)
#define ILI9341_MOSI_PIN				NRF_GPIO_PIN_MAP(1, 0)
#define ILI9341_SS_PIN					NRF_GPIO_PIN_MAP(0, 20)
#define ILI9341_DC_PIN					NRF_GPIO_PIN_MAP(0, 24)
#define ILI9341_RESET_PIN				NRF_GPIO_PIN_MAP(0, 22)
#define ILI9341_BACKLIGHT_CONTROL_PIN	NRF_GPIO_PIN_MAP(1, 4)
#define ILI9341_HEIGHT					320
#define ILI9341_WIDTH					240
#define ILI9341_SPI_INSTANCE			3

/** GPIO configurations, used for user input */
#define INPUT_BUTTON_UP_PIN				NRF_GPIO_PIN_MAP(0, 29)
#define INPUT_BUTTON_DOWN_PIN			NRF_GPIO_PIN_MAP(0, 2)
#define INPUT_BUTTON_LEFT_PIN			NRF_GPIO_PIN_MAP(1, 15)
#define INPUT_BUTTON_RIGHT_PIN			NRF_GPIO_PIN_MAP(1, 13)
#define INPUT_BUTTON_CENTER_PIN			NRF_GPIO_PIN_MAP(1, 11)
#define INPUT_BUTTON_EX1_PIN			NRF_GPIO_PIN_MAP(1, 1)
#define INPUT_BUTTON_EX2_PIN			0xFF // none

/** UART configurations, used for logging */
#define NRF_LOG_BACKEND_UART_TX_PIN		16
