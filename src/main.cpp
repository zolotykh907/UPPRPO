#include <iostream>
#include "math/mul.h"
#include "math/sum.h"
#include "math/minus.h"
#include "meta/meta.h"

int main() {
    double c = minus(sum(mul(5.2, 3.4),3.2), 3.0);
    std::cout << c << std::endl;
    // Пример обращения:
    const unsigned f5 = factorial<5>::value; // 120
    // Пример обращения:
    const unsigned i = C<5, 2>::value; // 10
    return 0;
}
//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