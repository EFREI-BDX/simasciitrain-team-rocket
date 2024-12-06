#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H
#include "AbstractWagon.h"
#include <ostream>

class UtilityWagon : public AbstractWagon {
    private:
        void print(std::ostream& os) override;

    public:
        UtilityWagon();
        ~UtilityWagon() override;
};



#endif //UTILITYWAGON_H
