#pragma once
#include "Command.h"

class CommandEdit :
    public Command
{
public:
    CommandEdit();
    void execute(std::ostream& out, const std::vector<std::string>& args) override;
};
