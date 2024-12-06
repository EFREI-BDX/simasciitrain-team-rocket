#ifndef WAGONS_H
#define WAGONS_H
#include <vector>

#include "AbstractWagon.h"

class Wagons {
    private:
        std::pmr::vector<AbstractWagon*> wagons;

    public:
        Wagons();
        ~Wagons();
        

};

#endif //WAGONS_H
