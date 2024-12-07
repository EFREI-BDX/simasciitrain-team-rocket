#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H
#include "TrainElement.h"
#include "TypeWagon.h"


class AbstractWagon : public TrainElement {
    protected:
    TypeWagon *typeWagon__;

    public:
    AbstractWagon(TypeWagon *typeWagon);
    ~AbstractWagon() override;
    [[nodiscard]] std::string getType();
    [[nodiscard]] char getSymbol();

    virtual void print(std::ostream& os) const = 0;

    friend std::ostream& operator<<(std::ostream &os, const AbstractWagon &wagon) {
        wagon.print(os);
        return os;
    }
};



#endif //ABSTRACTWAGON_H
