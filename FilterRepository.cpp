#include "FilterRepository.h"

std::vector<Employee> FilterRepository::employees;
std::vector<Car> FilterRepository::cars;
std::vector<Sale> FilterRepository::sales;

void FilterRepository::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void FilterRepository::removeEmployee(const std::string& name) {
    employees.erase(std::remove_if(employees.begin(), employees.end(),
        [&name](const Employee& emp) { return emp.name == name; }),
        employees.end());
}

void FilterRepository::addCar(const Car& car) {
    cars.push_back(car);
}

void FilterRepository::removeCar(const std::string& model) {
    cars.erase(std::remove_if(cars.begin(), cars.end(),
        [&model](const Car& c) { return c.model == model; }),
        cars.end());
}

void FilterRepository::addSale(const Sale& sale) {
    sales.push_back(sale);
}

void FilterRepository::removeSale(const std::string& saleDate) {
    sales.erase(std::remove_if(sales.begin(), sales.end(),
        [&saleDate](const Sale& sale) { return sale.saleDate == saleDate; }),
        sales.end());
}


