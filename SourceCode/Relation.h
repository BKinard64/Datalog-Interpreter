#ifndef RELATION_H
#define RELATION_H
#include "Header.h"
#include "Tuple.h"
#include <string>
#include <vector>
#include <set>

class Relation {
public:
    Relation(std::string name, Header* schema);
    ~Relation();
    std::string getName() const;
    Header* getHeader() const;
    std::set<Tuple> getTuples() const;
    void AddTuple(Tuple newTuple);
    Relation* Select(int position, std::string value);
    Relation* Select(int position1, int position2);
    Relation* Project(std::vector<int> positions);
    // Relation* Rename(std::vector<std::string> names);
    std::string toString();
private:
    std::string name;
    Header* header;
    std::set<Tuple> tuples;
};

#endif