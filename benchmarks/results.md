=== KernRift Benchmark Suite ===
Date: Fri May  8 01:18:22 AM UTC 2026
CPU: AMD Ryzen 9 7900X 12-Core Processor

--- fib ---

### fib

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 1ms |
| gcc -O0 | 25ms |
| gcc -O2 | 36ms |
| rustc (debug) | 61ms |
| rustc -O2 | 66ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 296 B |
| gcc -O0 | 15800 B |
| gcc -O2 | 15800 B |
| rustc debug | 3889248 B |
| rustc -O2 | 3887792 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 416ms (runs: 416, 415, 416)
| gcc -O0: 386ms (runs: 386, 387, 385)
| gcc -O2: 80ms (runs: 80, 80, 80)
| rustc debug: 388ms (runs: 394, 386, 388)
| rustc -O2: 164ms (runs: 164, 164, 164)

--- sort ---

### sort

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 23ms |
| gcc -O2 | 30ms |
| rustc (debug) | 70ms |
| rustc -O2 | 87ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 472 B |
| gcc -O0 | 15960 B |
| gcc -O2 | 15960 B |
| rustc debug | 3905344 B |
| rustc -O2 | 3888048 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 79ms (runs: 79, 80, 77)
| gcc -O0: 151ms (runs: 155, 150, 151)
| gcc -O2: 274ms (runs: 274, 274, 274)
| rustc debug: 2663ms (runs: 2667, 2663, 2650)
| rustc -O2: 44ms (runs: 44, 44, 47)

--- sieve ---

### sieve

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 25ms |
| gcc -O2 | 29ms |
| rustc (debug) | 73ms |
| rustc -O2 | 85ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 464 B |
| gcc -O0 | 16008 B |
| gcc -O2 | 16008 B |
| rustc debug | 3901200 B |
| rustc -O2 | 3888144 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 3ms (runs: 3, 3, 3)
| gcc -O0: 4ms (runs: 4, 4, 3)
| gcc -O2: 2ms (runs: 2, 2, 2)
| rustc debug: 21ms (runs: 21, 21, 21)
| rustc -O2: 2ms (runs: 2, 2, 2)

--- matmul ---

### matmul

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 2ms |
| gcc -O0 | 25ms |
| gcc -O2 | 32ms |
| rustc (debug) | 71ms |
| rustc -O2 | 83ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 1112 B |
| gcc -O0 | 15960 B |
| gcc -O2 | 15960 B |
| rustc debug | 3900272 B |
| rustc -O2 | 3888488 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 26ms (runs: 26, 26, 25)
| gcc -O0: 16ms (runs: 15, 16, 16)
| gcc -O2: 4ms (runs: 4, 4, 4)
| rustc debug: 124ms (runs: 124, 125, 124)
| rustc -O2: 3ms (runs: 3, 3, 3)

--- mandelbrot ---

### mandelbrot

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 3ms |
| gcc -O0 | 22ms |
| gcc -O2 | 27ms |
| rustc (debug) | 62ms |
| rustc -O2 | 68ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 1936 B |
| gcc -O0 | 15968 B |
| gcc -O2 | 15976 B |
| rustc debug | 3896840 B |
| rustc -O2 | 3893696 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 1774ms (runs: 1774, 1777, 1768)
| gcc -O0: 1395ms (runs: 1400, 1394, 1395)
| gcc -O2: 487ms (runs: 488, 487, 485)
| rustc debug: 1089ms (runs: 1088, 1091, 1089)
| rustc -O2: 481ms (runs: 480, 481, 482)

--- sha256 ---

### sha256

**Compile time:**
| Compiler | Time |
|----------|------|
| krc (self-hosted) | 6ms |
| gcc -O0 | 28ms |
| gcc -O2 | 44ms |
| rustc (debug) | 77ms |
| rustc -O2 | 95ms |

**Binary size:**
| Binary | Size |
|--------|------|
| krc | 6272 B |
| gcc -O0 | 16240 B |
| gcc -O2 | 16176 B |
| rustc debug | 3916688 B |
| rustc -O2 | 3897872 B |

**Runtime (median of 3):**
| Binary | Time |
|--------|------|
| krc: 430ms (runs: 430, 437, 428)
| gcc -O0: 197ms (runs: 197, 199, 194)
| gcc -O2: 39ms (runs: 40, 39, 39)
| rustc debug: 530ms (runs: 535, 527, 530)
| rustc -O2: 47ms (runs: 47, 47, 47)

=== Done ===
