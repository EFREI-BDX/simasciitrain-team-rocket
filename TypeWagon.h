#ifndef TYPEWAGON_H
#define TYPEWAGON_H
#include <string>


class TypeWagon{
    private:
        std::string name__;
        char symbol__;

    public:
        static TypeWagon PASSENGER;
        static TypeWagon FREIGHT;
        static TypeWagon UTILITY;

        TypeWagon(std::string name, char symbol);

        [[nodiscard]] std::string getName();
        [[nodiscard]] char getSymbol();
};


#endif //TYPEWAGON_H
