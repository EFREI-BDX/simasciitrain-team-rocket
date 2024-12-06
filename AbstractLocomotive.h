#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H

#include "TrainElement.h"
#include "TypeLocomotive.h"


class AbstractLocomotive: public TrainElement {
private:
    TypeLocomotive *typeLocomotive__;
    void print(std::ostream& os) const;

public:
    explicit AbstractLocomotive(TypeLocomotive *typeLocomotive);
    ~AbstractLocomotive();
    [[nodiscard]]char getSymbol() override;
    [[nodiscard]]std::string getType() override;
};

#endif //ABSTRACTLOCOMOTIVE_H
