#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H
#include <string>


class TypeLocomotive {
    private:
        std::string name__;
        char symbol__;

    public:
        static TypeLocomotive ELECTRIC;
        static TypeLocomotive GASOLINE;

        TypeLocomotive(std::string name, char symbol);
        [[nodiscard]] std::string getName();
        [[nodiscard]] char getSymbol();
};


#endif //TYPELOCOMOTIVE_H
