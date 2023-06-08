#include "Mountain.h"

// Constructor
Mountain::Mountain(std::string name, std::string country, double elevation)
    : name(name), country(country), elevation(elevation) {}

// Setters and getters
void Mountain::setName(std::string name) {
    this->name = name;
}

std::string Mountain::getName() const {
    return name;
}

void Mountain::setCountry(std::string country) {
    this->country = country;
}

std::string Mountain::getCountry() const {
    return country;
}

void Mountain::setElevation(double elevation) {
    this->elevation = elevation;
}

double Mountain::getElevation() const {
    return elevation;
}

// Conversion function
double Mountain::toMeters() const {
    return elevation / 3.2808;
}
