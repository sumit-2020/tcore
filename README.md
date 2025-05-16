# tcore

tcore is a C++ project for the **Design of Processing Elements (PEs)** for a TensorCore that implements matrix multiplication and addition using a rank-1 update scheme. This project provides a concise and efficient implementation targeted at high-performance computing applications, with a focus on leveraging tensor cores to accelerate matrix operations.

## Overview

The primary goal of this project is to design and simulate processing elements that can perform matrix multiplication and addition operations with high throughput and low latency. The implementations are optimized for performance and can be integrated into larger systems for tasks such as deep learning, scientific computing, and real-time processing.

## Features

- **High-Performance Matrix Multiplication:** Implements a rank-1 update based method tailored for tensor core architectures.
- **Efficient Use of Resources:** Designed to run efficiently on FPGA architectures, ensuring effective utilization of hardware resources.
- **C++ Implementation:** The entire codebase is written in C++, which makes it portable and easy to integrate with other C++ projects.
- **Modular Design:** Processing elements are designed as independent modules, supporting easy scalability and integration into larger systems.

## Algorithms and Methodology

The project builds on the algorithms introduced in the attached paper, *FPGA based high performance Double-precision Matrix Multiplication*. In the paper, a novel approach employing a rank-1 update scheme is discussed. This method decomposes matrix multiplication into a series of rank-1 updates, thereby exploiting data locality and reducing the overall computational complexity. The approach is especially tailored for FPGA implementations, where fine-grained control over parallelism and resource usage is critical. By leveraging tensor cores, the design achieves significant speed-ups for both matrix multiplication and matrix addition tasks, delivering high accuracy with double-precision arithmetic.

## Getting Started

### Prerequisites

- A C++ compiler (supporting C++11 or later)
- CMake (for building the project)
- (Optional) FPGA development tools if you plan to target FPGA hardware

### Building

Clone the repository and build using CMake:

```bash
git clone https://github.com/sumit-2020/tcore.git
cd tcore
mkdir build && cd build
cmake ..
make
```

### Running

After building, you can run the simulation or test suite:

```bash
./tcore_simulator
```

(Replace with the appropriate executable name as needed.)

## Project Structure

- `src/` - The source code for processing elements and algorithm implementation.
- `tests/` - Unit tests for verifying the correctness and performance of the design.
- `FPGA based high performance Double-precision Matrix Multiplication.pdf` - The research paper that introduces the algorithmic ideas behind the project.
- `CMakeLists.txt` - Build configuration.

## Contribution

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/sumit-2020/tcore/issues).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
