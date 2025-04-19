#pragma once

#include <string>
#include <vector>

enum class TokenType { exit, int_lit, semi };

struct Token {
    TokenType type;
    std::optional<std::string> value {};
};

class Tokenizer {
public:
    inline Tokenizer(const std::string src)
        : m_src(std::move(src))
    {
    }
    
    inline std::vector<Token> tokenize()
    {
        std::string buf;
        for (int i = 0; i < str.length(); i++ {
            char c = str.at(i);
            if (std::isalpha(c)) {
                buf.push_back(c);
                i++;
                while (std::isalnum(str.at(i))) {
                    buf.push_back(str.at(i));
                    i++;
                }
                i--;
                if (buf == "exit") {
                    tokens.push_back({.type = TokenType::exit});
                    buf.clear();
                    continue;
                } else {
                    std::cerr << "You messed up!" << std::endl;
                    exit(EXIT_FAILURE);
                }
            } else if (std::isdigit(c)) {
                buf.push_back(c);
                i++;
                while (std::isdigit(str.at(i))) {
                    buf.push_back(str.at(i));
                    i++;
                }
                i--;
                tokens.push_back({.type = TokenType::int_list, .value = buf});
                buf.clear();
            } else if (c == ';') {
                tokens.push_back({.type = TokenType::semi});
            } else if (std::isspace(c)) {
                continue;
            } else {
                std::cerr << "You messed up!" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
    return tokens;
    }

private:
   
   std::optional<char> peak() const {
   @9:03 (Pt. 2)
   }
 
   const std::string m_src;
};
