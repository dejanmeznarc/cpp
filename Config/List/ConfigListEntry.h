//
// Created by FuckWindows on 02/03/2021.
//

#ifndef J_CONFIGLISTENTRY_H
#define J_CONFIGLISTENTRY_H


#include "../Config.h"

class ConfigListEntry {
    static ConfigListEntry *first;
public:

    static ConfigListEntry *getFirst();

    static ConfigListEntry *getLast();

    bool isEmpty() const;
    bool isNext() const;

    static void add(Config *config);

    Config *data = nullptr;
    ConfigListEntry *next = nullptr;


};


#endif //J_CONFIGLISTENTRY_H
