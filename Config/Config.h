//
// Created by FuckWindows on 02/03/2021.
//

#ifndef J_CONFIG_H
#define J_CONFIG_H


class Config {
public:
    virtual void sync() = 0;
    virtual void load() = 0;

};


#endif //J_CONFIG_H
