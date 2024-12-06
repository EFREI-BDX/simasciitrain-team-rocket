#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H
#include "AbstractWagon.h"
#include <ostream>

class UtilityWagon : public AbstractWagon {
    private:
        void print(std::ostream& os) const override;

    public:
        UtilityWagon();
        ~UtilityWagon();
};

#endif //UTILITYWAGON_H
