#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H
#include <ostream>

class PassengerWagon {
    private:
        int passengerCount__;
        void print(std::ostream& os);

    public:
        PassengerWagon();
        ~PassengerWagon();
        [[nodiscard]] int getPassengerCount() const;
        void setPassengerCount(int passengerCount);
};

#endif //PASSENGERWAGON_H
