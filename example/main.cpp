#include "Exceptf.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    int errNum = 1;
    std::string errMsg = "ERROR MESSAGE";
    try {
        throw Exceptf("EXCEPTF\nerror number: %d\nerror message: %s\nfile: %s\nline: %d\n",
            errNum, errMsg.c_str(), __FILE__, __LINE__
        );
    }
    catch (Exceptf& error) {
        std::cout << error.what() << std::endl;
    }
    return 0;
}
