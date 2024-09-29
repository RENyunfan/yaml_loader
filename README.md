# yaml_loader

A header-only wrapper class for `yaml-cpp` that simplifies the safe and easy loading of YAML parameters.

## Dependencies

To use `yaml-loader`, you need to install `yaml-cpp`:

```bash
sudo apt install libyaml-cpp-dev
```

## Usage

1. Copy and include `yaml_loader.hpp` in your project.
2. Add the following lines to your `CMakeLists.txt`:

```cmake
find_package(yaml-cpp REQUIRED)

target_link_libraries(${YOUR_PROJECT}
        yaml-cpp
)
```

## Example

For an example of usage, please refer to `main.cpp`.
