#include "FilterEntity.h"

// ������� ��� Employee
void printEmployee(const Employee& emp) {
    std::cout << "����������: " << emp.name << ", ������: " << emp.position << "\n";
}

// ������� ��� Car
void printCar(const Car& car) {
    std::cout << "���������: " << car.manufacturer << " " << car.model << ", г�: " << car.year << "\n";
}

// ������� ��� Sale
void printSale(const Sale& sale) {
    std::cout << "������: " << sale.saleDate << ", ����������: " << sale.employee.name << ", ���������: " << sale.car.model << "\n";
}

