//
// Created by FuckWindows on 02/03/2021.
//

#include "ConfigListEntry.h"


ConfigListEntry *ConfigListEntry::first = new ConfigListEntry();


bool ConfigListEntry::isEmpty() const {
    return (data == nullptr);
}

ConfigListEntry *ConfigListEntry::getLast() {
    ConfigListEntry *temp = first;
    while (temp->next) temp = temp->next;
    return temp;
}

void ConfigListEntry::add(Config *config) {

    ConfigListEntry *last = getLast();

    if (last->isEmpty()) {
        last->data = config;
    } else {
        auto *newEntry = new ConfigListEntry();
        newEntry->data = config;
        last->next = newEntry;
    }
}

ConfigListEntry *ConfigListEntry::getFirst() {
    return first;
}

bool ConfigListEntry::isNext() const {
    return (next != nullptr);
}
