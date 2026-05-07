// Mandelbrot escape-time count. See mandelbrot.c for the spec.
fn main() {
    const W: usize = 1024;
    const H: usize = 1024;
    const MAX_ITER: u64 = 1000;
    let mut sum: i64 = 0;
    for py in 0..H {
        let y0 = py as f64 / H as f64 * 2.0 - 1.0;
        for px in 0..W {
            let x0 = px as f64 / W as f64 * 3.0 - 2.0;
            let mut x = 0.0_f64;
            let mut y = 0.0_f64;
            let mut iter: u64 = 0;
            while x * x + y * y <= 4.0 && iter < MAX_ITER {
                let xt = x * x - y * y + x0;
                y = 2.0 * x * y + y0;
                x = xt;
                iter += 1;
            }
            sum += iter as i64;
        }
    }
    println!("{}", sum);
}
