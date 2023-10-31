#include <iostream>

class Figures {
protected:
    int Number_of_sides;
public:
    Figures() {
        Number_of_sides = 0;
    }
    void Show_sides() {
        std::cout << Number_of_sides << "\n";
    }
};

class Triangle : public Figures {
public:
    Triangle() {
        Number_of_sides = 3;
    }
};

class Quadrangle : public Figures {
public:
    Quadrangle() {
        Number_of_sides = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "russian");
    Figures figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон\n";
    std::cout << "Фигура: ";
    figure.Show_sides();
    std::cout << "Треугольник: ";
    triangle.Show_sides();
    std::cout << "Четырёхугольник: ";
    quadrangle.Show_sides();

    return 0;
}