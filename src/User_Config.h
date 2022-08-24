
#if defined (ESP32) || defined (ESP8266) || (ARDUINO_ARCH_RP2040)  || defined (ARDUINO_ARCH_MBED)
  #define TJPGD_LOAD_FFS
#endif

//#define TJPGD_LOAD_SD_LIBRARY

//#define TJPGD_ARRAY_SUPPORT

#include "tjpgdcnf.h"

#if JD_SWAP_SUPPORT == 1
#define TJPGD_SWAP_SUPPORT
#else
#undef TJPGD_SWAP_SUPPORT
#endif
