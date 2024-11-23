#pragma once
#ifndef CONSTANTS_H
#define CONSTANTS_H
using namespace std;

int main();
namespace myConstants {
    const double GRAVITY = 9.8; // Гравитация на Земле в м/с^2
}
double calculateHeight(double initialHeight, int seconds) {
    double height = initialHeight - (myConstants::GRAVITY * seconds * seconds) / 2;
    return height < 0 ? 0 : height; // Не допускаем отрицательной высоты
}
#endif 
