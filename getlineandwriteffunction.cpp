/*****
 * getline() write() functions
 * we can read and display a line of text more efficiently using the line orented input 
 * and outpu function getline() and write() 
 * the getline() function reads a whole line of text that ends with new line character transmitted
 * by the RETURN key
 * this function can be invoked by using the object cin as follows
 * This function call invokes the ffunction getline() which reads character input into the 
 * varaoible line
 * the reading is terminated as soon as either the new line character \n is cencountered 
 * or size 1 character
 * are read whichever encounters fiurst
 * the newline character is read but not saved 
 * Instead it is replace by the null character 
 * For examle
 * char name[20];
 * cin.getline(name,20);
 * 
 * this input will be read correctly and assigned to the new character array name.
 * Let us suppose the input is as follows
 * 
 * object oriented programming and then press enter
 * in this case the input will be terminated after reading the following 19 characters 
 * object oriented pro
 * 
 * rember the two blank spaces contained in the string are also taken account
 * we can also read strings using the >> as follow
 * cin>>name
 * But remember cin can read strings that do not contain white spaces 
 * this means that cin can read just one word and not a series of words such as 
 * Bjarne Stroustrp
 * but it can read the following strings correctly
 * 
 * after reading the string cin automatically adds the terminating null character to charater 
 * array
 * 
 * 
 * ******/
#include<iostream>

int main()
{
    int size = 20;
    char city[20];

    std::cout<<"Enter the city name : "<<std::endl;
    std::cin>>city;
    std::cout<<"City name : "<<city<<std::endl;

    std::cout<<"Enter the city name again"<<std::endl;
    std::cin.getline(city,size);
    std::cout<<"City name now : "<<city<<std::endl;

    std::cout<<"Enter the another city name : "<<std::endl;
    std::cin.getline(city,size);
    std::cout<<"New city name : "<<city<<std::endl;

    return 0;
}