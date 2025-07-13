# Ray Tracing

My results implementing the Ray Tracing in One Weekend book

## Build

```bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

## Run

```bash
./raytracing > image.ppm
```

Example output at 50 samples per pixel:

![Ray traced image](./image.ppm)
