// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_MUSTFUN_BOARD_H
#define _BOARDS_MUSTFUN_BOARD_H

#define MUSTFUN_BOARD_BOARD

#define GPIO_VALID_PINS_BASE 0b00111111111111111111111111111111

// On some samples, the xosc can take longer to stabilize than is usual
#ifndef PICO_XOSC_STARTUP_DELAY_MULTIPLIER
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64
#endif


//------------- LED -------------//
#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN 18
#endif

// --- FLASH ---

#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (8 * 1024 * 1024)
#endif

#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

// --- PIO USB ---

#ifndef PICO_DEFAULT_PIO_USB_DP_PIN
#define PICO_DEFAULT_PIO_USB_DP_PIN 26
#endif

#ifndef PICO_DEFAULT_PIO_USB_VBUSEN_PIN
#define PICO_DEFAULT_PIO_USB_VBUSEN_PIN 27
#endif

#ifndef PICO_DEFAULT_PIO_USB_VBUSEN_STATE
#define PICO_DEFAULT_PIO_USB_VBUSEN_STATE 1
#endif

#endif
