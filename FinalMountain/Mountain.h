#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <string>

class Mountain {
private:
    std::string name;
    std::string country;
    double elevation;

public:
    // Constructor
    Mountain(std::string name, std::string country, double elevation);

    // Setters and getters
    void setName(std::string name);
    std::string getName() const;
    void setCountry(std::string country);
    std::string getCountry() const;
    void setElevation(double elevation);
    double getElevation() const;

    // Conversion functions
    double toMeters() const;
};

#endif  // MOUNTAIN_H
