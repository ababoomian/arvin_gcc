//Arvin Hakoupian
//Lab 1b part 2
//CS/IS 135

/*
    START
    DECLARE numTrees, treeHeight, forDelivery AS INTEGER
    DECLARE singleTree, treeCost, deliveryCost, totalCharges AS DOUBLE

    INPUT numTrees
    INPUT treeHeight
    INPUT forDelivery

    SET singleTree = 39.00 WHEN treeHeight < 3
    SET singleTree = 69.50 WHEN treeHeight >= 3 AND treeHeight <= 5
    SET singleTree = 99.00 WHEN treeHeight >= 6 AND treeHeight <= 8
    SET singleTree = 199.50 WHEN treeHeight > 8

    SET treeCost = numTrees * singleTree

    SET deliveryCost = 10.00 * numTrees WHEN numTrees < 5 AND forDelivery == 1
    SET deliveryCost = 50.00 WHEN numTrees >= 5 AND forDelivery == 1

    SET totalCharges = treeCost + deliveryCost

    DISPLAY numTrees, singleTree, treeCost, deliveryCost, totalCharges
    END
*/

#include <iostream>
#include <iomanip>

int main() {
    int numTrees, treeHeight, forDelivery;
    double singleTree = 0.0, treeCost = 0.0, deliveryCost = 0.0, totalCharges = 0.0;

    std::cout << "Enter the number of trees: ";
    std::cin >> numTrees;
    std::cout << "Enter the height of the tree (in feet): ";
    std::cin >> treeHeight;
    std::cout << "Do you want delivery? (1 for Yes, 0 for No): ";
    std::cin >> forDelivery;

    if (treeHeight < 3) {
        singleTree = 39.00;
    } else if (treeHeight >= 3 && treeHeight <= 5) {
        singleTree = 69.50;
    } else if (treeHeight >= 6 && treeHeight <= 8) {
        singleTree = 99.00;
    } else {
        singleTree = 199.50;
    }

    treeCost = numTrees * singleTree;

    if (forDelivery == 1) {
        if (numTrees < 5) {
            deliveryCost = 10.00 * numTrees;
        } else {
            deliveryCost = 50.00;
        }
    } else {
        deliveryCost = 0.00;
    }

    totalCharges = treeCost + deliveryCost;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Invoice ---\n";
    std::cout << "Number of trees: " << numTrees << std::endl;
    std::cout << "Cost of one tree: $" << singleTree << std::endl;
    std::cout << "Total tree cost: $" << treeCost << std::endl;
    std::cout << "Delivery cost: $" << deliveryCost << std::endl;
    std::cout << "Total charges: $" << totalCharges << std::endl;

    return 0;
}