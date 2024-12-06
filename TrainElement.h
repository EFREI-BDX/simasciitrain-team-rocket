#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H
#include <string>


class TrainElement {
    public:
        virtual ~TrainElement();
        [[nodiscard]] virtual char getSymbol();
        [[nodiscard]] virtual std::string getType();

    protected:
        virtual void print(std::ostream& os);
};

#endif //TRAINELEMENT_H
