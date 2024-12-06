#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H
#include "TrainElement.h"
#include "TypeWagon.h"


class AbstractWagon : public TrainElement {
    private:
    TypeWagon *typeWagon__;

    public:
    AbstractWagon(TypeWagon *typeWagon);
    ~AbstractWagon();
    [[nodiscard]] std::string getType() override;
    [[nodiscard]] char getSymbol() override;
    void print(std::ostream& os) ;
};



#endif //ABSTRACTWAGON_H
