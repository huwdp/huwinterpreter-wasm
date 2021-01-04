/*
    HuwInterpreter is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    HuwInterpreter is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with HuwInterpreter.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <string>
#include <memory>
#include "parser/parser.h"
#include "tokens/token.h"
#include "tokens/scanner.h"
#include "io/io.h"
#include "errors/errors.h"
#include "tokens/filetokenmanager.h"
#include "huwinterpreter.h"

int main(int argc, char* argv[])
{
    std::shared_ptr<HuwInterpreter::Interpreter> interpreter = std::make_shared<HuwInterpreter::Interpreter>();

    while (true)
    {
        std::cout << ">>> ";
        std::string text;
        std::cin >> text;
        if (text == "exit")
        {
            std::exit(0);
        }
        std::cout << std::endl;
        interpreter->execute(interpreter->parseText(text));
    }
    std::exit(0);
}
