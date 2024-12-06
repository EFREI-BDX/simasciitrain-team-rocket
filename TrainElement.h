#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H
#include <string>
#include <iostream>

    class TrainElement {
    public:
        virtual ~TrainElement();
        [[nodiscard]] virtual char getSymbol();
        [[nodiscard]] virtual std::string getType();

        friend std::ostream& operator<<(std::ostream& os, const TrainElement& train)
        {
            train.print(os) ;
            return os;
        }

    protected:
        virtual void print(std::ostream& os) const = 0;
    };


#endif //TRAINELEMENT_H
