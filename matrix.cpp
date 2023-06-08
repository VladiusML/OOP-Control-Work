#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "matrix.h"

std::istream& operator>>(std::istream& is, Matrix& m)
{
	m.set_matr();
	return is;

}
std::ostream& operator<<(std::ostream& os, Matrix& m)
{
	m.print_info();
	return os;
}