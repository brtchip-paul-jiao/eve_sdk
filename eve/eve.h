#if    defined(FT800_ENABLE) || defined(FT801_ENABLE)
#   include <ft80x.h>
#elif  defined(FT810_ENABLE) || defined(FT811_ENABLE) || defined(FT812_ENABLE) || defined(FT813_ENABLE)
#   include <ft81x.h>
#elif  defined(BT815_ENABLE) || defined(BT816_ENABLE)
#   include <bt81x.h>
#else
#   error "You must define one of EVE types: ft80x, ft81x, bt81x by defining macros："
#   error "FT800_ENABLE  FT801_ENABLE  FT810_ENABLE  FT811_ENABLE  FT812_ENABLE  FT813_ENABLE  BT815_ENABLE  BT816_ENABLE"
#endif