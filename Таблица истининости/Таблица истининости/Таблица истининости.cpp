

#include <iostream>

int main()
{

    bool f = false, t = true;
    bool res0, res1, res2, res3, mes0, mes1, mes2, mes3;
    std::cout << "Operator &&" << std::endl;
    res0 = (f && t);
    if (res0 == 1) {
        std::cout << "false" << " && " << "true" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "false" << " && " << "true" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    res1 = (t && f);
    if (res1 == 1) {
        std::cout << "true" << " && " << "false" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "true" << " && " << "false" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    res2 = (t && t);
    if (res2 == 1) {
        std::cout << "true" << " && " << "true" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "true" << " && " << "true" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    res3 = (f && f);
    if (res3 == 1) {
        std::cout << "false" << " && " << "false" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "false" << " && " << "false" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    std::cout << "Operator ||" << std::endl;
    mes0 = (f || t);
    if (mes0 == 1) {
        std::cout << "false" << " || " << "true" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "false" << " || " << "true" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    mes1 = (t || f);
    if (mes1 == 1) {
        std::cout << "true" << " || " << "false" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "true" << " || " << "false" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    mes2 = (t || t);
    if (mes2 == 1) {
        std::cout << "true" << " || " << "true" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "true" << " || " << "true" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    mes3 = (f || f);
    if (mes3 == 1) {
        std::cout << "false" << " || " << "false" << ' ' << " = " << ' ' << "true" << std::endl;
    }
    else {
        std::cout << "false" << " || " << "false" << ' ' << " = " << ' ' << "false" << std::endl;
    }
    return 0;
}





