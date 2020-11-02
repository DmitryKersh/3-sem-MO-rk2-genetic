//
// Created by dimchik on 02.11.2020.
//

#ifndef INC_3_SEM_MO_GENETIC_POPULATION_H
#define INC_3_SEM_MO_GENETIC_POPULATION_H

#include "Entity.h"
#include <vector>
#include <iostream>

using std::vector;
using std::endl;

class Population {
    vector<Entity> entities;
    Entity cross_over(size_t first, size_t second);
public:
    explicit Population(const vector<Entity>& data) : entities(data) {}

    double avg_fit();
    vector<Entity> next_generation();

    void Print(std::ostream& os);


};


#endif //INC_3_SEM_MO_GENETIC_POPULATION_H
