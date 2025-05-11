#include "Zoo.h"
#include "Lion.h"
#include "Elephant.h"
#include "Penguin.h"
#include "Monkey.h"

int main() {
    Zoo myZoo;
    
    myZoo.AddAnimal(new Lion("Simba", 5, 25.0));
    myZoo.AddAnimal(new Elephant("Dumbo", 10, 2.5));
    myZoo.AddAnimal(new Penguin("Pingu", 3, 10.0));
    myZoo.AddAnimal(new Monkey("George", 4, 75.0));
    
    myZoo.DisplayAllAnimals();
    
    return 0;
}
