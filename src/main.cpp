#include "main.h"

int main()
{
    int k;
    std::cout << "Hello Wold!" << std::endl;
    nlohmann::json json = {
        {"pi", 3.14},
        {"happy", true},
        {"name", "Kuba"},
        {"nothing", nullptr},
        {"answer", {
            {"everything", 42}
        }},
        {"list", {1, 2, 3}},
        {"object", {
            {"currency", "PLN"},
            {"value", 100.0}
        }}
    };

    std::cout << "We got here" << std::to_string((int) json["pi"]) << std::endl;
    fmt::print("yaasa {}", 13);
    std::cin >> k;
    return 0;
}