#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H
#include <string>


class TypeLocomotive {
    private:
        std::string name__;
        char symbol__;

    public:
        static const TypeLocomotive ELECTRIC;
        static const TypeLocomotive GASOLINE;

        TypeLocomotive(std::string name, char symbol);
        [[nodiscard]] std::string getName() const;
        [[nodiscard]] char getSymbol() const;
};


#endif //TYPELOCOMOTIVE_H
