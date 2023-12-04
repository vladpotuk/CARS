#include "FilterEntity.h"

// Функції для Employee
void printEmployee(const Employee& emp) {
    std::cout << "Співробітник: " << emp.name << ", Посада: " << emp.position << "\n";
}

// Функції для Car
void printCar(const Car& car) {
    std::cout << "Автомобіль: " << car.manufacturer << " " << car.model << ", Рік: " << car.year << "\n";
}

// Функції для Sale
void printSale(const Sale& sale) {
    std::cout << "Продаж: " << sale.saleDate << ", Співробітник: " << sale.employee.name << ", Автомобіль: " << sale.car.model << "\n";
}

