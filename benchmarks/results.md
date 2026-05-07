=== KernRift Benchmark Suite ===
Date: Thu May  7 09:24:51 PM UTC 2026
CPU: AMD Ryzen 9 7900X 12-Core Processor

--- fib ---

### fib

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 1ms |
| gcc -O0 | 24ms |
| gcc -O2 | 36ms |
| rustc (debug) | 62ms |
| rustc -O2 | 67ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 320 B |
| gcc -O0 | 15800 B |
| gcc -O2 | 15800 B |
| rustc debug | 3889248 B |
| rustc -O2 | 3887792 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 441ms (runs: 444, 441, 414)
| gcc -O0: 385ms (runs: 385, 385, 384)
| gcc -O2: 80ms (runs: 80, 79, 80)
| rustc debug: 387ms (runs: 388, 387, 385)
| rustc -O2: 165ms (runs: 165, 165, 163)

--- sort ---

### sort

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 24ms |
| gcc -O2 | 28ms |
| rustc (debug) | 74ms |
| rustc -O2 | 95ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 552 B |
| gcc -O0 | 15960 B |
| gcc -O2 | 15960 B |
| rustc debug | 3905344 B |
| rustc -O2 | 3888048 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 111ms (runs: 108, 112, 111)
| gcc -O0: 155ms (runs: 155, 157, 151)
| gcc -O2: 273ms (runs: 273, 272, 275)
| rustc debug: 2657ms (runs: 2657, 2674, 2648)
| rustc -O2: 45ms (runs: 45, 44, 45)

--- sieve ---

### sieve

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 24ms |
| gcc -O2 | 28ms |
| rustc (debug) | 72ms |
| rustc -O2 | 84ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 496 B |
| gcc -O0 | 16008 B |
| gcc -O2 | 16008 B |
| rustc debug | 3901200 B |
| rustc -O2 | 3888144 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 3ms (runs: 3, 3, 2)
| gcc -O0: 4ms (runs: 4, 4, 3)
| gcc -O2: 2ms (runs: 2, 2, 2)
| rustc debug: 21ms (runs: 21, 20, 21)
| rustc -O2: 2ms (runs: 2, 2, 2)

--- matmul ---

### matmul

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 24ms |
| gcc -O2 | 32ms |
| rustc (debug) | 72ms |
| rustc -O2 | 83ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 1320 B |
| gcc -O0 | 15960 B |
| gcc -O2 | 15960 B |
| rustc debug | 3900272 B |
| rustc -O2 | 3888488 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 33ms (runs: 33, 33, 33)
| gcc -O0: 16ms (runs: 16, 16, 16)
| gcc -O2: 4ms (runs: 4, 4, 4)
| rustc debug: 129ms (runs: 125, 129, 129)
| rustc -O2: 3ms (runs: 3, 3, 3)

--- mandelbrot ---

### mandelbrot

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 22ms |
| gcc -O2 | 26ms |
| rustc (debug) | 63ms |
| rustc -O2 | 72ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 2032 B |
| gcc -O0 | 15968 B |
| gcc -O2 | 15976 B |
| rustc debug | 3896840 B |
| rustc -O2 | 3893696 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 1890ms (runs: 1890, 1888, 1890)
| gcc -O0: 1402ms (runs: 1402, 1402, 1408)
| gcc -O2: 489ms (runs: 489, 489, 489)
| rustc debug: 1098ms (runs: 1096, 1098, 1098)
| rustc -O2: 481ms (runs: 481, 485, 481)

--- sha256 ---

### sha256

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 4ms |
| gcc -O0 | 27ms |
| gcc -O2 | 43ms |
| rustc (debug) | 80ms |
| rustc -O2 | 98ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 6976 B |
| gcc -O0 | 16240 B |
| gcc -O2 | 16176 B |
| rustc debug | 3916688 B |
| rustc -O2 | 3897872 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 605ms (runs: 605, 602, 606)
| gcc -O0: 196ms (runs: 194, 196, 197)
| gcc -O2: 40ms (runs: 40, 40, 40)
| rustc debug: 533ms (runs: 538, 530, 533)
| rustc -O2: 47ms (runs: 48, 47, 46)

=== Done ===
