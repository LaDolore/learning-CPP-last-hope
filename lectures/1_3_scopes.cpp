#include <iostream>
#include <vector>

// 1.3. Declaration, definition and scopes

// One Definition Rule (ODR)

void f();

void g() { f(); }

void f() { g(); }

// Function overloading 
int f(int x) { return x + 1; }

double f(double x) { return x + 1; }

namespace N {
	int x = 7;
}

namespace NN {
	int x = 6;
}

int main() {	

}

//x; - unqualified-id
//N::x; - qualified-id
//::x; - обращение к глобальному x;
//
//Promotion - преобразование типа переменной в переменную с тем же типом но большую по размеру
//Convertion - преобразование типа переменной в другой тип
//Promotion > Convertion > User convertion
//Если при перегрузке функции оба преобразования равнозначны, возникает ошибка "call of overloaded function is ambiguous" (является Compile Error, а не Runtime Error)
//
//В отличие от функций, объясвение переменной является её определением, если переменая объявлена в main, её значение становится равно мусору
//Если переменная объявлена в глобальной области видимости, её значение становится равно '0' и она помещается в блок памяти 'bss'.
//Чтобы объявить(declaration), но не определить(definition) её, импользуется ключевое слово 'extern'.
