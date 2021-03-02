//
// Created by FuckWindows on 02/03/2021.
//

#ifndef J_SPECIALCONFIGURATION_H
#define J_SPECIALCONFIGURATION_H


#include <iostream>
#include "../../Config.h"

class SpecialConfiguration : public Config {

public:

    void sync() override {
        std::cout << "syncing special configuration" << std::endl;
    }

    void load() override {
        std::cout << "loading special coinfi" << std::endl;
    }


};


#endif //J_SPECIALCONFIGURATION_H
