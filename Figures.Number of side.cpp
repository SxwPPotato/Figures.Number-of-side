#include <iostream>
#include <string>

class Figures {
protected:
    int Number_of_sides;
    std::string Name_of_figure;
public:
    Figures() {
        Number_of_sides = 0;
        Name_of_figure = "Фигура";
    }
    void Show_name() {
        std::cout << Name_of_figure << ": ";
    }
    void Show_sides() {
        std::cout << Number_of_sides << "\n";
    }
};

class Triangle : public Figures {
public:
    Triangle() {
        Number_of_sides = 3;
        Name_of_figure = "Треугольник";
    }
};

class Quadrangle : public Figures {
public:
    Quadrangle() {
        Number_of_sides = 4;
        Name_of_figure = "Четырёхугольник";
    }
};

int main()
{
    setlocale(LC_ALL, "russian");
    Figures figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон\n";
    figure.Show_name();
    figure.Show_sides();
    triangle.Show_name();
    triangle.Show_sides();
    quadrangle.Show_name();
    quadrangle.Show_sides();

    return 0;
}