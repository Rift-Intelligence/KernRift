// Mandelbrot escape-time count.
// Output: sum of iteration counts over a 1024x1024 grid covering
// re ∈ [-2, 1], im ∈ [-1, 1], max_iter = 1000.
// Deterministic, same value every run, comparable across implementations.
#include <stdio.h>

int main(void) {
    const int W = 1024, H = 1024, MAX_ITER = 1000;
    long long sum = 0;
    for (int py = 0; py < H; py++) {
        double y0 = (double)py / (double)H * 2.0 - 1.0;
        for (int px = 0; px < W; px++) {
            double x0 = (double)px / (double)W * 3.0 - 2.0;
            double x = 0.0, y = 0.0;
            int iter = 0;
            while (x*x + y*y <= 4.0 && iter < MAX_ITER) {
                double xt = x*x - y*y + x0;
                y = 2.0 * x * y + y0;
                x = xt;
                iter++;
            }
            sum += iter;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
