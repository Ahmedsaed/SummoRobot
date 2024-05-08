#ifndef __LOG__
#define __LOG__

#define DEBUG_ENABLED 1

#if DEBUG_ENABLED
#define DEBUG_PRINT(msg) Serial.print(msg)
#define DEBUG_PRINTLN(msg) Serial.println(msg)
#else
#define DEBUG_PRINT(msg)
#define DEBUG_PRINTLN(msg)
#endif

#endif
