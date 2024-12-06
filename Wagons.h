#ifndef WAGONS_H
#define WAGONS_H
#include <vector>

#include "AbstractWagon.h"

class Wagons {
    private:
        std::pmr::vector<AbstractWagon*> wagons__;

    public:
        Wagons();
        ~Wagons();
        Wagons* addWagon(AbstractWagon* wagon);
        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);


};

#endif //WAGONS_H
