#pragma once

enum State {
    IDLE,
    WALK
};

struct Controller {
    State state = IDLE;
    float time = 0.0f;
};