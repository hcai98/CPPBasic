#include <iostream>
using namespace std;

struct Hero
{
    string name;
    int age;
    string gender;
};



void printHero(const Hero *h)
{
    cout << "{" << h->name << ", " << h->age << ", " << h->gender << "}";
}

void printHeroArr(Hero arrHero[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        printHero(&arrHero[i]);
        cout << endl;
    }
    cout << endl;
}

void rankHeros(Hero arrHero[], int arrSize)
{

    struct Hero tempHero;
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (arrHero[j].age > arrHero[j + 1].age)
            {
                tempHero = arrHero[j + 1];
                arrHero[j + 1] = arrHero[j];
                arrHero[j] = tempHero;
            }
            // printHeroArr(arrHero, 5);
        }
    }
}

int main()
{

    Hero arrHero[5] = {
        {"Hero1", 23, "male"},
        {"Hero2", 22, "male"},
        {"Hero3", 20, "male"},
        {"Hero4", 21, "female"},
        {"Hero5", 19, "female"}};

    int arrSize = sizeof(arrHero) / sizeof(arrHero[0]);

    cout << "Before Rank " << endl;
    printHeroArr(arrHero, arrSize);

    rankHeros(arrHero, arrSize);

    cout << "After Rank " << endl;
    printHeroArr(arrHero, arrSize);

    return 0;
}
