#include "FilterScreen.h"
#include "FilterFunctions.h"
#include "FilterEntity.h"
#include "FilterRepository.h"
#include "LocalDataSource.h"

int main() {
    system("chcp 1251");
    system("cls");

    LocalDataSource::loadDataFromFile();  

    int choice;
    do {
        FilterScreen::showMainMenu();
        choice = FilterFunctions::getIntInput("ќбер≥ть опц≥ю: ");

        switch (choice) {
        case 1: 
            do {
                FilterScreen::showEmployeeMenu();
                choice = FilterFunctions::getIntInput("ќбер≥ть опц≥ю: ");

                switch (choice) {
                case 1: 
                    break;

                case 2: 
                    break;
                }
            } while (choice != 0);
            break;

        case 2: 
            do {
                FilterScreen::showCarMenu();
                choice = FilterFunctions::getIntInput("ќбер≥ть опц≥ю: ");

                switch (choice) {
                case 1: 
                    break;

                case 2: 
                    break;
                }
            } while (choice != 0);
            break;

        case 3: 
            do {
                FilterScreen::showSalesMenu();
                choice = FilterFunctions::getIntInput("ќбер≥ть опц≥ю: ");

                switch (choice) {
                case 1: 
                    break;

                case 2: 
                    break;
                }
            } while (choice != 0);
            break;

        case 4:
            do {
                FilterScreen::showReportsMenu();
                choice = FilterFunctions::getIntInput("ќбер≥ть опц≥ю: ");

                switch (choice) {
                case 1: 
                    
                    break;

                case 2: 
                    
                    break;

                case 3: 
                    
                    break;

                    
                }
            } while (choice != 0);
            break;

        case 5: 
            LocalDataSource::saveDataToFile();  
            break;

        case 6: 
            LocalDataSource::loadDataFromFile();  
            break;
        }
    } while (choice != 0);

    return 0;
}
