//
// Created by btearle on 01.06.21.
//

#ifndef MPCC_OBSTACLE_H
#define MPCC_OBSTACLE_H

#include "types.h"

namespace mpcc {

class Obstacle {
public:
    Obstacle(const State& s) : state_(s) {
        if (state_.vx != 0.0) {
            type_ = ObstacleType::kDynamic;
        }
    }

    enum class ObstacleType {
        kStatic,
        kDynamic
    };

    ObstacleType type() const {
        return type_;
    }

    void set_position(double x, double y) {
        state_.X = x;
        state_.Y = y;
    }

    State state() const {
        return state_;
    }

private:
    State state_;
    ObstacleType type_;
};

}

#endif // MPCC_OBSTACLE_H
