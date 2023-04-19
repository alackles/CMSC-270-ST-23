#ifndef UTILS_h_
#define UTILS_H_

template<class T> inline
T min(T a, T b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

template<class T> inline
T max(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

#endif /* UTILS_H_ */