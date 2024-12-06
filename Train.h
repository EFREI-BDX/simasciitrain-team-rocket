#ifndef TRAIN_H
#define TRAIN_H

#include "Wagons.h"
#include "AbstractLocomotive.h"
#include "ITrain.h"

class Train : public simasciitrain::ITrain {
    private:
        Wagons* wagons;
        AbstractLocomotive* locomotive;
    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;
    protected:
        void print(std::ostream& os) const override;
};

#endif