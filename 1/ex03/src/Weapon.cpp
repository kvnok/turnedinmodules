#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string &type) : type(type) {}

std::string &Weapon::getType(){
	return type;
}

void Weapon::setType(const std::string &type) {
	this->type = type;
}

Weapon::~Weapon() {

}
