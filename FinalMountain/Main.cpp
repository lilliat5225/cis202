#include <iostream>
#include <vector>
#include "Mountain.h"

// Function to find the mountain with the minimum elevation
Mountain minElevation(const std::vector<Mountain>& mountains) {
    if (mountains.empty()) {
        // Return an empty Mountain object if the vector is empty
        return Mountain("", "", 0.0);
    }

    Mountain minMountain = mountains[0];
    for (const Mountain& mountain : mountains) {
        if (mountain.getElevation() < minMountain.getElevation()) {
            minMountain = mountain;
        }
    }

    return minMountain;
}

int main() {
    // Create Mountain objects
    Mountain chimborazo("Chimborazo", "Ecuador", 20549);
    Mountain matterhorn("Matterhorn", "Switzerland", 14692);
    Mountain olympus("Olympus", "Greece (Macedonia)", 9573);
    Mountain everest("Everest", "Nepal", 29029);
    Mountain mountMarcy("Mount Marcy - Adirondacks", "United States", 5344);
    Mountain mountMitchell("Mount Mitchell - Blue Ridge", "United States", 6684);
    Mountain zugspitze("Zugspitze", "Switzerland", 9719);

    // Put the Mountain objects in a vector
    std::vector<Mountain> mountains = {chimborazo, matterhorn, olympus, everest, mountMarcy, mountMitchell, zugspitze};

    // Print Mountain details with elevation in feet and meters
    std::cout << "Mountain Details:\n";
    for (const Mountain& mountain : mountains) {
        std::cout << "Name: " << mountain.getName() << "\n";
        std::cout << "Country: " << mountain.getCountry() << "\n";
        std::cout << "Elevation (Feet): " << mountain.getElevation() << "\n";
        std::cout << "Elevation (Meters): " << mountain.toMeters() << "\n";
        std::cout << "-------------------------\n";
    }

    // Find the mountain with the minimum elevation
    Mountain shortestMountain = minElevation(mountains);
    std::cout << "Shortest Mountain:\n";
    std::cout << "Name: " << shortestMountain.getName() << "\n";
    std::cout << "Elevation: " << shortestMountain.getElevation() << " feet\n";

    return 0;
}
