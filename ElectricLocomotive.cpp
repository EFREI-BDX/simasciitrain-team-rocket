#include "ElectricLocomotive.h"

#include "TypeLocomotive.h"
ElectricLocomotive::ElectricLocomotive() : AbstractLocomotive(&TypeLocomotive::ELECTRIC) {}
ElectricLocomotive::~ElectricLocomotive() = default;