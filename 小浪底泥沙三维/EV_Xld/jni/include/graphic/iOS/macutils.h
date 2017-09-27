#include <CoreFoundation/CoreFoundation.h>
#include "prerequisites.h"
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            void *mac_loadDylib(const ev_char *name);
            EV_GRAPHIC_DLL std::string macCachePath();
            EV_GRAPHIC_DLL std::string macBundlePath();
            EV_GRAPHIC_DLL std::string iOSDocumentsDirectory();
        }
    }
}

