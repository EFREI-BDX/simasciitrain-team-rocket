#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H
#include <string>
#include <iostream>

class TrainElement {
    public:
        virtual ~TrainElement() = default;
        [[nodiscard]] virtual char getSymbol() = 0;
        [[nodiscard]] virtual std::string getType() = 0;

        friend std::ostream& operator<<(std::ostream& os, const TrainElement& train) {
            train.print(os);
            return os;
        }

    protected:
        virtual void print(std::ostream& os) const = 0;
};

#endif // TRAINELEMENT_H
