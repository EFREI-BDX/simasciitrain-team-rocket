#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H
#include "AbstractWagon.h"


class UtilityWagon : public AbstractWagon {
    private:
        void print(std::ostream& os);

    public:
        UtilityWagon();
        ~UtilityWagon();
};



#endif //UTILITYWAGON_H
