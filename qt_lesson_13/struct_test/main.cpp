#include <stdio.h>

using namespace std;

struct Car{
    //constructor
    Car(){
        printf("test123\n");
        speed = 200;
    }
    int speed;
    int number;
    int count;
    char model[20];
    char* str;
};

struct Test{
    Test()
    {
        test1 = 100;
        test2 = 30;
        printf("%d\n", test1);
        printf("%d\n", test2);
    }

    int test1;
    int test2;
};


struct Test2{
    Test2(int _a)
    {
        printf("%d\n", _a);
    }
    int test;
    int test2;
};

int main()
{
    Car toyota;


    toyota.speed = 150;
    toyota.number = 472;
    toyota.count = 10000;

printf("%d\n", toyota.speed );

    Test test;
    test.test1 = 80;

    int var = 5;
    //Test2 test2(5);
    Test2 test2 = Test2(var);

    return 0;
}
