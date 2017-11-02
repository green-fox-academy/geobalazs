#include <stdio.h>

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

typedef struct {
    char address[25];
    int price;
    int rooms;
    int area;

}houses;

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

void buy_house(houses * p_house){

    int market_price_sqm = 400;

    int house_price_sqm = p_house->price / p_house->area;

    if(house_price_sqm < market_price_sqm){
        printf("\nThe house at '%s' worth to buy!\n" , p_house->address);
    } else{
        printf("\nThe house at '%s' is too expensive!\n" , p_house->address);
    }

    //return house_price_sqm;
    //printf("%d\t" , house_price_sqm);
    //printf("%d" , p_house->price);
}

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.

int buy_house_2( houses *house , int length){

    int i = 0;
    int counter = 0;
    int price_sqm = 0;
    int market_price_sqm = 400;

    for(i = 0 ; i < length; i++){
        price_sqm = house[i].price / house[i].area;
        //printf("%d" , price_sqm);
        if(price_sqm < market_price_sqm){
        //printf("\t\t!!!!!%s!!!!!!!!!\n" , house[i].address);
        counter++;
        }
    }
    return counter;
}

int main() {

    houses house_1 = { "Buda" , 40000 , 3 , 45 };
    houses house_2 = { "Pest" , 30000 , 3 , 45 };
    houses house_3 = { "Szeged" , 17000 , 3 , 45 };
    houses house [3] = { house_1 , house_2 , house_3  };
    int struct_length = 0;

    struct_length = sizeof(house)/ sizeof(house[0]);
    //printf("\n\n%d\n\n" , struct_length);


    houses * p_house1 = &house_1;
    houses * p_house2 = &house_2;
    houses * p_house3 = &house_3;
    buy_house(p_house1);
    buy_house(p_house2);
    buy_house(p_house3);

    printf("\n%d house(s) is/are worth to buy.\n" , buy_house_2( house , struct_length));

//    printf("%d" , buy_house(p_house3));

//    printf("%s" , house_1.address);

  return 0;
}
