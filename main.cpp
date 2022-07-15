#include <iostream>
using namespace std;

struct Student{
  string name;
  int age;
  float GPA;
};
 //another way to define struct
typedef struct{
string name;
int age;
float weight;
int userID;
} user;

int main()
{
    // 2 users will be defined in this struct (0, 1)
    user userInfo[2];
    int a = 2;
    int b (5);
    double c{77.8595};
    auto results = a+b+c;
    cout << results <<endl;

    struct Student AyaInfo;
    AyaInfo.name = "Aya Mohsen";
    AyaInfo.age = 23;
    AyaInfo.GPA = 3.25;

    struct Student MaiInfo;
    MaiInfo.name = "Mai AbdelAziz";
    MaiInfo.age = 23;
    MaiInfo.GPA = 3.0;

    userInfo[0].name = "Ahmed Mohsen";
    userInfo[0].age = 12;
    userInfo[0].userID = 20108494;
    userInfo[0].weight = 40;

    cout << "Name: "<< AyaInfo.name << endl;
    cout << "Name: "<< MaiInfo.name << endl;
    cout << "Age: " << AyaInfo.age << endl;
    cout << "Age: " << MaiInfo.age << endl;
    cout << "GPA: " << AyaInfo.GPA << endl;
    cout << "GPA: " << MaiInfo.GPA << endl;
    cout << "Name:" << userInfo[0].name<< endl;

    //arrays
    int numbers[5];
    numbers[0] = 5;
    numbers[1] = 66;
    numbers[2] = 770;
    numbers[3] = 859;
    numbers[4] = 3;
    //numbers[5] = { 1, 2, 3, 4, 5}
    cout <<"num1 : " << numbers[1] <<endl;
    return 0;
}
