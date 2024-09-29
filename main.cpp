#include "yaml_loader.hpp"

#define CONFIG_FILE_DIR(name) (std::string(std::string(ROOT_DIR) + "config/"+(name)))

int main() {
    yaml_loader::YamlLoader loader(CONFIG_FILE_DIR("test.yaml"));
    bool is_360lidar;
    double polar_resolution;
    double x_value;
    std::vector<int> some_vector;

    try {
        loader.LoadParam("is_360lidar", is_360lidar, false, false);
        loader.LoadParam("polar_resolution", polar_resolution, 0.0, false);
        loader.LoadParam("data/x", x_value, 0.0, false);
        loader.LoadParam("data/y", some_vector, std::vector<int>{1, 2, 3}, false);
        loader.LoadParam("data/z", some_vector, std::vector<int>{1, 2, 3}, false);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout<<"Finished loading parameters"<<std::endl;

    return 0;
}
