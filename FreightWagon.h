#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H
#include <ostream>

class FreightWagon {
    private:
        int freightCount__;
        void print(std::ostream& os);

    public:
        FreightWagon(int freightCount);
        ~FreightWagon();
        [[nodiscard]] int getFreightCount() const;
        void setFreightCount(int freightCount);
};

#endif //FREIGHTWAGON_H
