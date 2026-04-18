#include <iostream>
#include <string>
#include <vector>

struct SuburbProfile {
    std::string name = "Borivali";
    std::string district = "Mumbai Suburban";
    std::string railway_zone = "Western Railway";
    std::vector<std::string> attractions = {"SGNP", "Kanheri Caves", "Gorai Creek"};
    int pincode = 400091; // Common for Borivali West
};

int main() {
    SuburbProfile bvi;
    
    std::cout << "--- Suburb Record: " << bvi.name << " ---\n";
    std::cout << "District: " << bvi.district << "\n";
    std::cout << "Key Hub:  " << bvi.railway_zone << " (BVI)\n";
    std::cout << "Tourism:  ";
    for(const auto& site : bvi.attractions) std::cout << site << " | ";
    std::cout << std::endl;
    
    return 0;
}
