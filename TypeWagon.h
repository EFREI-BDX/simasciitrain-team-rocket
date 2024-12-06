#ifndef TYPEWAGON_H
#define TYPEWAGON_H
#include <string>


class TypeWagon{
    private:
        std::string name__;
        char symbol__;

    public:
        static const TypeWagon PASSANGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;

        TypeWagon(std::string name, char symbol);

        [[nodiscard]] std::string getName() const;
        [[nodiscard]] char getSymbol() const;
};


#endif //TYPEWAGON_H
