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
$ -DCMAKE_BUILD_TYPE=Debug ../
$ make
$ make install
$ cd..
```
or
```bash
$ mkdir bin; mkdir build; cd build; cmake -DCMAKE_BUILD_TYPE=Debug ../; make ;make install; cd..
```

### Running

```bash
$ ./bin/example
```
