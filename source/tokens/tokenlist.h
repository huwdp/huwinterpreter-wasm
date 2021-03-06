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

#ifndef TOKENDETECTOR_H
#define TOKENDETECTOR_H

#include <unordered_map>
#include <string>
#include <sstream>
#include "types/tokentypes.h"
#include <algorithm>

namespace HuwInterpreter {
    namespace Tokens {
        class TokenList
        {
        private:
            std::unordered_map<short, std::string> types;
        public:
            TokenList();
            void init();
            std::string get(Types::TokenType value);
            Types::TokenType get(std::string value);
            bool fastCompare(std::string value, Types::TokenType token);
            bool fastCompare(char value, Types::TokenType token);
            bool compare(std::string value1, Types::TokenType value);
            bool compare(char value1, Types::TokenType value);
            bool exists(Types::TokenType value);
            bool exists(std::string value);
            void add(std::string text, Types::TokenType tokenType);
        };
    }
}

#endif // TOKENDETECTOR_H
