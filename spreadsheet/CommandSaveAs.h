#pragma once
#include "Command.h"
#include "FileContext.h"
#include "Table.h"

/**
 * @brief saveas \<file\> - saves the currently open file in \<file\> and switches to it
 * 
 */
class CommandSaveAs :
    public Command
{
private:
    FileContext* fileCtx;
    Table* table;
public:
    /**
     * @brief Construct a new Command SaveAs
     * 
     * @param fileCtx active file
     * @param table reference to table
     */
    CommandSaveAs(FileContext& fileCtx, Table& table);
    bool fileRequirement() override;
    void execute(std::istream& in, std::ostream& out, const std::vector<std::string>& args) override;
};
