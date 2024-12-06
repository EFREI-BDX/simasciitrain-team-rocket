#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H
#include <ostream>

#include "AbstractWagon.h"

class PassengerWagon : public AbstractWagon {
    private:
        int passengerCount__;
        void print(std::ostream& os);

    public:
        PassengerWagon(int passengerCount);
        ~PassengerWagon();
        [[nodiscard]] int getPassengerCount() const;
        void setPassengerCount(int passengerCount);
};

#endif //PASSENGERWAGON_H
