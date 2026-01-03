#include <iostream>

int main() {
    int height = 7;
    int width = 5;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 ||
                (i == 0 && j < width - 1) ||
                (i == height / 2 && j < width - 1)
                (j == width - 1 && i > 0 && i < height / 2)) {
                std::cout << "*";
                } else {
                    std::cout << " ";
                }
        }
        std::cout << std::endl;
    }

    return 0;
}
