#include <iostream>

#include "vector"
#include "Config/Config.h"
#include "Config/List/ConfigListEntry.h"
#include "Config/configs/SpecialConfiguration/SpecialConfiguration.h"
#include "Config/configs/NormieConfig/NormieConfiguration.h"

using namespace std;


int main() {
    ConfigListEntry::add(new SpecialConfiguration());
    ConfigListEntry::add(new NormieConfiguration());
    ConfigListEntry::add(new SpecialConfiguration());
    ConfigListEntry::add(new NormieConfiguration());
    ConfigListEntry::add(new NormieConfiguration());
    ConfigListEntry::add(new SpecialConfiguration());


    ConfigListEntry *temp = ConfigListEntry::getFirst();
    temp->data->sync();

    while (temp->isNext()) {
        temp->data->sync();
        temp = temp->next;
    }

    return 0;
}
