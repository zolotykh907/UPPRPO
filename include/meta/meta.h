template<unsigned N>
struct factorial {
    static const unsigned value = N * factorial<N - 1>::value;
};
template<>
struct factorial<0> {
    static const unsigned value = 1;
};


template<unsigned N, unsigned K>
struct C {
    static const unsigned value = factorial<N>::value / factorial<K>::value / factorial<N - K>::value;
};


template<unsigned alpha, unsigned beta, unsigned gamma>
struct monomial_3d {
static const unsigned value = factorial<alpha + beta + gamma + 3>::value /
    (factorial<alpha>::value * factorial<beta>::value * factorial<gamma>::value);
};