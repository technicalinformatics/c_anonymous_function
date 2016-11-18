#include <stdio.h>

void func_a() {
    printf("Hello, I am func_a!\n");
}
void func_b() {
    printf("Hello, I am func_b!\n");
}
void func_c() {
    printf("Hello, I am func_c!\n");
}
void func_d() {
    printf("Hello, I am func_d!\n");
}
void func_e() {
    printf("Hello, I am func_e!\n");
}

int main(int argc, char* argv[]) {
    void do_loop(void (**d)(), int amount) {
        for (int i = 0; i < 5; i++) {
            (d[i])();
        }
    }

    void (*d[5])() = {func_a, func_b, func_c, func_d, func_e};
    do_loop(d, 5);

    return 0;
}
