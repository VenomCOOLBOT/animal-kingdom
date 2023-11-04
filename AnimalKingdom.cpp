#include <iostream>
using namespace std;

class Animal
{

public:
    string animal;
    string noise;
    string diet;

    string getAnimal()
    {
        return animal;
    }

    string getNoise()
    {
        return noise;
    }

    string getDiet()
    {
        return diet;
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        animal = "Cat";
        noise = "Meow!";
        diet = "Carnivore";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        animal = "Dog";
        noise = "Bark!";
        diet = "Carnivore";
    }
};

class Pig : public Animal
{
public:
    Pig()
    {
        animal = "Pig";
        noise = "Oink!";
        diet = "Omnivore";
    }
};

int main()
{
    Cat cat;
    Dog dog;
    Pig pig;

    cout << "Noise: " << cat.getNoise() << endl;
    cout << "Noise: " << dog.getNoise() << endl;
    cout << "Noise: " << pig.getNoise() << endl;

    cout << " " << endl;

    cout << "Animal: " << cat.getAnimal() << endl;
    cout << "Animal: " << dog.getAnimal() << endl;
    cout << "Animal: " << pig.getAnimal() << endl;

    cout << " " << endl;

    cout << "Diet: " << cat.getDiet() << endl;
    cout << "Diet: " << dog.getDiet() << endl;
    cout << "Diet: " << pig.getDiet() << endl;
}