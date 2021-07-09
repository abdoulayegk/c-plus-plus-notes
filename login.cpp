#include <iostream>
#include <memory>

struct Logger
{
    virtual void LogMessage(char const* message) = 0;
    virtual ~Logger() = default;
};

struct ConsoleLogger final: Logger
{
    virtual void LogMessage(char const* message) override{
        std::cout << message << std::endl;
    }
};


int main(int argc, char *argv[])
{
    auto logger{std::make_unique<ConsoleLogger>()};
    Logger* logger_ptr{logger.get()};
    logger_ptr->LogMessage("Hello, world!");
    return 0;
}
