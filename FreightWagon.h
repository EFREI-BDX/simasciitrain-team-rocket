#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H

#include "AbstractWagon.h"

class FreightWagon : public AbstractWagon {
    private:
        int freightCount__;
        void print(std::ostream& os) const override;

    public:
        FreightWagon(int freightCount);
        ~FreightWagon();
        [[nodiscard]] int getFreightCount() const;
        void setFreightCount(int freightCount);
};

#endif //FREIGHTWAGON_H
