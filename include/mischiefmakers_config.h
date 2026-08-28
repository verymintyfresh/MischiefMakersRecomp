#ifndef __MISCHIEFMAKERS_CONFIG_H__
#define __MISCHIEFMAKERS_CONFIG_H__

#include <filesystem>
#include <string>

namespace mischiefmakers {
    inline const std::u8string program_id = u8"MischiefMakersRecompiled";
    inline const std::string program_name = "Mischief Makers: Recompiled";

    namespace configkeys {
        namespace general {
        }
    }

    // TODO: Move loading configs to the runtime once we have a way to allow per-project customization.
    void init_config();
};

#endif
