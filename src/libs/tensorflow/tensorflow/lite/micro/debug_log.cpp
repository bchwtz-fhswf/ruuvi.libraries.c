#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "ruuvi_interface_log.h"
#ifdef __cplusplus
}
#endif

#if RI_LOG_ENABLED
static inline void LOGD (const char * const msg)
{
    ri_log (RI_LOG_LEVEL_DEBUG, msg);
}
#else
#define LOGD(...)
#endif

#include "tensorflow/lite/micro/debug_log.h"

extern "C" void DebugLog(const char* s) { 
  if(s!=0) {
    LOGD("TENSORFLOW: ");
    int p = 0;
    char part_of_s[40];
    while(p<strlen(s)) {
      strncpy(part_of_s, s+p, sizeof(part_of_s)-1);
      LOGD(part_of_s);
      p+=sizeof(part_of_s)-1;
    }
    LOGD("\r\n");
  } 
}