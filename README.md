# exceptf
Custom exception class with message formatting feature.

## Build Instructions

### Requirements

- [git](https://git-scm.com/)
- [cmake](https://cmake.org/)
- [gcc](https://www.gnu.org/software/gcc/) or [clang](https://clang.llvm.org/) or [msvc](https://visualstudio.microsoft.com/)

### Building

```bash
$ mkdir bin
$ mkdir build && cd build
$ cmake -G  *your generator*
$ -DCMAKE_BUILD_TYPE=Debug ../
$ make -j 2
$ make install
$ cd..
```

### Running

```bash
$ ./bin/example
```
