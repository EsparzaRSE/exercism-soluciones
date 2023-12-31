#pragma once

#ifndef ALLERGIES_H
#define ALLERGIES_H

#include <string>
#include <unordered_set>

namespace allergies {

    class allergy_test{
        
        public:
            allergy_test(unsigned int sco);        
            bool is_allergic_to(const std::string& item);
            std::unordered_set<std::string> get_allergies();

        private:
             std::unordered_set<std::string> lista{};
             unsigned int score{};           
    };
}  // namespace allergies

#endif // ALLERGIES_H