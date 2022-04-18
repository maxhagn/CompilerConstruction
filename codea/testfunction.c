long foo() {
    struct f_stage1 {
        long (*func)(long, long, struct f_stage1 *);

        long a;
        long b;
    };

    extern long f(long c, long d, struct f_stage1 *fs1);
    struct f_stage1 f1 = {&f, 5, 6};
    return f(7, 8, &f1);
}
