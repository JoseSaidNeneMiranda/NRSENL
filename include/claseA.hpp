#pragma once
#include <iomanip>
#include <cmath>

class SistemaEcuaciones {
private:
    double x;
    double y;

public:
    SistemaEcuaciones(double x_0, double y_0) : x(x_0), y(y_0) {}

    // Definición de las funciones
    double f1() const {
        return x * x + y * y - 1;
    }

    double f2() const {
        return x * x - y * y + 0.5;
    }

    // Derivadas parciales de las funciones
    double df1_dx() const {
        return 2 * x;
    }

    double df1_dy() const {
        return 2 * y;
    }

    double df2_dx() const {
        return 2 * x;
    }

    double df2_dy() const {
        return -2 * y;
    }

    // Método de Newton-Raphson
    void newtonRaphson() {
        std::cout << std::fixed << std::setprecision(10);

        std::cout << "Iteración inicial:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;

        int iter = 0;
        double epsilon = 1e-6;
        double f1_val = f1();
        double f2_val = f2();

        while (std::abs(f1_val) > epsilon || std::abs(f2_val) > epsilon) {
            double J11 = df1_dx();
            double J12 = df1_dy();
            double J21 = df2_dx();
            double J22 = df2_dy();

            double determinant = J11 * J22 - J12 * J21;
            if (std::abs(determinant) < 1e-6) {
                std::cout << "No se puede calcular la solución, el Jacobiano es singular." << std::endl;
                return;
            }

            double delta_x = (-f1_val * J22 + f2_val * J12) / determinant;
            double delta_y = (-f2_val * J11 + f1_val * J21) / determinant;

            x += delta_x;
            y += delta_y;

            f1_val = f1();
            f2_val = f2();

            iter++;

            std::cout << "Iteración " << iter << ":" << std::endl;
            std::cout << "Ecuaciones utilizadas:" << std::endl;
            std::cout << "f1(x, y) = x^2 + y^2 - 1 = " << x << "^2 + " << y << "^2 - 1 = " << f1_val << std::endl;
            std::cout << "f2(x, y) = x^2 - y^2 + 0.5 = " << x << "^2 - " << y << "^2 + 0.5 = " << f2_val << std::endl;

            std::cout << "x = " << x << std::endl;
            std::cout << "y = " << y << std::endl;
            std::cout << "f1 = " << f1_val << std::endl;
            std::cout << "f2 = " << f2_val << std::endl;

            std::cout << "Matrices utilizadas:" << std::endl;
            std::cout << "Jacobian Matrix:" << std::endl;
            std::cout << "| " << J11 << "  " << J12 << " |" << std::endl;
            std::cout << "| " << J21 << "  " << J22 << " |" << std::endl;

            std::cout << "Delta Matrix:" << std::endl;
            std::cout << "| " << delta_x << " |" << std::endl;
            std::cout << "| " << delta_y << " |" << std::endl;

            std::cout << "---------------------" << std::endl;
        }

        std::cout << "Solución encontrada después de " << iter << " iteraciones." << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
};