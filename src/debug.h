#ifndef _WG_DEBUG_H
#define _WG_DEBUG_H

#define WG_DISABLE_LOGGING

#ifdef WG_DISABLE_LOGGING
#define WG_LOG(message, ...)
#define WG_LOG_FUNCTION()
#else
#define WG_LOG(message, ...) do { pr_info("WG_LOG: " message " (%s:%d)", ##__VA_ARGS__, __func__, __LINE__); } while (0)
#define WG_LOG_FUNCTION() do { pr_info("WG_LOG: %s:%d", __func__, __LINE__); } while (0)
#endif

#endif
