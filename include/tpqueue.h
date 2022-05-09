// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
    T mas[100];
    int n, m;
 public:
    TPQueue() : n(0), m(0) { }
    void push(T num) {
        int i = m++;
        for (i; (--i >= n && (mas[i % size].prior <num.prior)) {
            mas[(i + 1) % size] = mas[i % size];
        }
        mas[(i + 1) % size] = num;
    }
    T pop() {
        return mas[(n++) % size];
    }
};

struct SYM {
    char ch;
    int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
