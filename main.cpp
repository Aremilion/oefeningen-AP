//
// Created by jules on 15/10/2026.
//
#include <iostream>
#include <list>
/*OEF1
void swap(int*& a, int*& b) {
    int* c = a;
    a = b;
    b = c;
}

int main() {
    int a = 8;
    int b = 9;
    int* pa = &a;
    int* pb = &b;

    swap(pa, pb);
    std::cout << *pa << " " << *pb << std::endl; // prints 9 8
    std::cout << a << " " << b << std::endl;     // still 8 9
    return 0;
}

*/

/*OEF2


#include <iostream>

void doubleNumber(int& num) {num = num * 2;}

int main() {
    int num = 35;
    doubleNumber(num);
    std::cout << num; // Should print 70
    return 0;
}
*/

/*OEF3
int mult(int x , int y ) {
    if (y==0) {
        return 0;
    }
    int half = mult(x,y/2);
    if (y&1) {return half+half+x ; }
    else return half+half;

}
int main() {
    int x = 3 ; int y = 5 ;
    int a  = mult(x,y);
    std::cout << a << std::endl;
    return 0;

}
*/

/*OEF4
#include <algorithm>
#include <iterator>
#include <utility>

typedef std::pair<int, int> Item;  // weight, value
typedef std::list<Item> ItemList;

// beste value voor de kost
static int knapsackRec(int capacity, ItemList::const_iterator it,
                       ItemList::const_iterator end) {
    if (it == end) return 0;  // capacity is op


    int skip = knapsackRec(capacity, std::next(it), end);  // skip deze en check de volgende


    if (it->first > capacity) return skip;  // pak dit item , als het past lol
    int take = it->second + knapsackRec(capacity - it->first, std::next(it), end);

    return std::max(skip, take);  //return degene met de max value
}

int knapsack(int capacity, const ItemList& items) {
    return knapsackRec(capacity, items.begin(), items.end());
}

int main() {
    ItemList items;
    items.push_back(Item(10, 60));
    items.push_back(Item(20, 100));
    items.push_back(Item(30, 120));

    std::cout << knapsack(50, items) << std::endl;
    std::cout << knapsack(5, items) << std::endl;
    return 0;

    //je vraagt jezelf telkens af , wat gebeurd er als ik dit item erin of eruit doe.
    //dus je checkt beide, je maakt een alternate universe met erin en met eruit, voor elk item opnieuw
    // je houd telkens de universe bij met de beste value opt einde. dan ga je er helemaal opnieuw door met een andere universe
}

*/

/*
 * OEF5
#include <random>

#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    // 2X2 vierkant
    std::uniform_real_distribution<double> distrib(-1.0, 1.0);

    const long long totaal_pijltjes = 10'000'000;   //tering veel dingen om simulatie goed te laten verlopen
    long long binnen_cirkel = 0;

    for (long long i = 0; i < totaal_pijltjes; ++i) {
        // Genereer een coördinaat ergens in het vierkant van 2x2
        double x = distrib(gen);
        double y = distrib(gen);

        // pythagoras the goat
        if (x * x + y * y <= 1.0) {
            binnen_cirkel++;
        }
    }


    // opp cirkel = pi * r² = pi * 1² = pi
    // opp vierkant = 2 * 2 = 4
    // Verhouding = pi / 4  ->  pi = 4 * (binnen / totaal)
    double pi_benadering = 4.0 * static_cast<double>(binnen_cirkel) / totaal_pijltjes;

    std::cout << "Aantal simulaties (Volledige cirkel): " << totaal_pijltjes << "\n";
    std::cout << "Berekende Pi                        : " << pi_benadering << "\n";
    std::cout << "Echte Pi                            : 3.141592653589793\n";

    return 0;
}
*/
