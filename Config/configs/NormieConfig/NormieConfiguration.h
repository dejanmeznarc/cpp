//
// Created by FuckWindows on 02/03/2021.
//

#ifndef J_NORMIECONFIGURATION_H
#define J_NORMIECONFIGURATION_H

#include <iostream>
#include "../../Config.h"

class NormieConfiguration : public Config {
public:
    void sync() override {
        std::cout << "syncing normibe configuration" << std::endl;
    }

    void load() override {
        std::cout << "loading nomribe coinfi" << std::endl;
    }


};


#endif //J_NORMIECONFIGURATION_H
