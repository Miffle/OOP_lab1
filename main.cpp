#include "Complex.h"

int main() {
    Complex first(15.0, 5.0);
    first.addition();
    first.get_result();

    first.multiplication();
    first.get_result();

    first.division();
    first.get_result();

    first.substraction();
    first.get_result();

    return 0;
}
