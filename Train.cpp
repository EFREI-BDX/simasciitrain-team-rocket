#include "Train.h"

Train::Train(Wagons* wagons, AbstractLocomotive* locomotive) : wagons(wagons), locomotive(locomotive){}

Train::~Train() = default;

void Train::print(std::ostream& os) const {
    os << *wagons << "-" << *locomotive;
}
