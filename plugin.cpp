#include <cstdint>
#include "controller.h"

Controller* g = nullptr;

extern "C" {

    __declspec(dllexport) uint32_t arkheon_character_sdk_version() {
        return 0x00010000;
    }

    __declspec(dllexport) void* arkheon_character_create(const float segs[10]) {
        g = new Controller();
        return g;
    }

    __declspec(dllexport) void arkheon_character_destroy(void* h) {
        delete static_cast<Controller*>(h);
        g = nullptr;
    }

    __declspec(dllexport) int arkheon_character_tick(void* h, float dt) {
        return 0;
    }

}