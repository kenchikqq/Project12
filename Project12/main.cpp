#include <windows.h>
#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 10;
    int randomNumbers[SIZE]; 
    int userNumbers[SIZE];   

    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    for (int i = 0; i < SIZE; ++i) {
        randomNumbers[i] = std::rand() % 11; 
    }

    
    std::cout << "������� 10 ����� �� 0 �� 10:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        int input;
        while (true) {
            std::cout << "����� " << (i + 1) << ": ";
            std::cin >> input;

            
            if (input >= 0 && input <= 10) {
                userNumbers[i] = input;
                break; 
            }
            else {
                std::cout << "������: ������� ����� �� 0 �� 10." << std::endl;
            }
        }
    }

    
    std::cout << "\n��������� �����:\n";
    for (int i = 0; i < SIZE; ++i) {
        if (randomNumbers[i] == userNumbers[i]) {
            std::cout << "���������! ������ " << i + 1 << ": " << randomNumbers[i] << std::endl;
        }
        else {
            std::cout << "������ " << i + 1 << ": ����������� " << randomNumbers[i]
                << ", �� ����� " << userNumbers[i] << std::endl;
        }
    }

    return 0;
}