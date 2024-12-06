#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H
#include "TrainElement.h"
#include "TypeWagon.h"


class AbstractWagon : public TrainElement {
    private:
    TypeWagon *typeWagon__;

    public:
    AbstractWagon(TypeWagon *typeWagon);
    ~AbstractWagon() override;
    [[nodiscard]] std::string getType() override;
    [[nodiscard]] char getSymbol() override;

    virtual void print(std::ostream& os) = 0 ;

    friend std::ostream& operator<<(std::ostream &os, const AbstractWagon &wagon) {
        wagon.print(os);
        return os;
    }
};



#endif //ABSTRACTWAGON_H
