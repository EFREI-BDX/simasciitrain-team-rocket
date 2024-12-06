#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H

#include "TrainElement.h"
#include "TypeLocomotive.h"


class AbstractLocomotive: public TrainElement {
private:
    TypeLocomotive *typeLocomotive__;
    void print(std::ostream& os) const override;

public:
    explicit AbstractLocomotive(TypeLocomotive *typeLocomotive);
    ~AbstractLocomotive() override;
    [[nodiscard]]char getSymbol() override;
    [[nodiscard]]std::string getType() override;
};

#endif //ABSTRACTLOCOMOTIVE_H
