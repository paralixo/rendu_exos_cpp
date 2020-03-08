#include <iostream>
#include <vector>

void swap(int *a, int *b) {
    int c{*a};
    *a = *b;
    *b = c;
}

void minMax(std::vector<int> array, int arraySize, int *min, int *max) {
    std::cout << " - valeurs du tableau: " << std::endl;
    for (int x : array) {
        std::cout << "   - " << x << std::endl;
        if (x > *max) {
            *max = x;
        } else if (x < *min) {
            *min = x;
        }
    }
}

void fillInputArray(int *array) {
    std::cout << "Premiere valeur du tableau : ", std::cin >> array[0];
    std::cout << "\nDeuxieme valeur du tableau : ", std::cin >> array[1];
    std::cout << "\nTroisieme valeur du tableau : ", std::cin >> array[2];
    std::cout << "\nQuatrieme valeur du tableau : ", std::cin >> array[3];
    std::cout << "\nCinquieme valeur du tableau : ", std::cin >> array[4];
}

int main() {
    std::cout << "Fonction de swap:" << std::endl;
    std::cout << " - Avant swap:" << std::endl;
    int a{3};
    int b{4};
    std::cout << "   - valeur de a = " << a << std::endl;
    std::cout << "   - valeur de b = " << b << std::endl;
    swap(&a, &b);
    std::cout << " - Apres swap:" << std::endl;
    std::cout << "   - valeur de a = " << a << std::endl;
    std::cout << "   - valeur de b = " << b << std::endl;

    std::cout << "\nFonction min/max tableau:" << std::endl;
    std::vector<int> minMaxArray{10, 40, 30, -5};
    int min, max{minMaxArray[0]};
    minMax(minMaxArray, minMaxArray.size(), &min, &max);
    std::cout << " - valeur minimale du tableau: " << min << std::endl;
    std::cout << " - valeur maximale du tableau: " << max << std::endl;

    std::cout << "\nFonction entrees du tableau:" << std::endl;
    int inputArray[5]{0, 0, 0, 0, 0};
    fillInputArray(inputArray);
    std::cout << "Valeurs du tableau: " << std::endl;
    for ( int x : inputArray) {
        std::cout << " - " << x << std::endl;
    }
    return 0;
}
