#include <stdio.h>

int main()
{
    //it is a good idea to ensure that all functions have a prototype in scope before being used
    void printfScanf();
    void enumTypes();
    void formatSpecifiers();
    void areaPerimeterCalculator();
    void sizeOfExamples();

    sizeOfExamples();

    return 0;
}

void printfScanf(){

    char name[] = "Ricardo";
    int number;
    int test = 2;

    printf("Hi, what's your name?\n");
    scanf("%s", name);

    printf("%s, please inform your favorite number:\n", name);

    scanf("%i", &number);

    printf("Congrats %s, your favorite number is %i. Divided by %i it is %i\n", name, number, test, number/test);
}

void enumTypes(){

    enum colors {red, blue, green};
    enum colors favoriteColor = blue;

    printf("%d", favoriteColor);
}

void formatSpecifiers(){
    int intNumber = 15;
    float floatNumber = 4.5;
    double doubleNumber = 323.4356789564;
    char charName = 'M';
    char stringName[] = "Ricardo Mondini";
    _Bool boolType = 1;

    printf("int i: %i\n", intNumber); //15
    printf("int d: %d\n", intNumber); //15
    printf("int hexa: %x\n", intNumber); //f
    printf("float e: %e\n", floatNumber); //4.500000e+000
    printf("float f: %f\n", floatNumber); //4.500000
    printf("double e: %e\n", doubleNumber); //3.234357e+002
    printf("double g: %g\n", doubleNumber); //32.43
    printf("charName: %c\n", charName); //M
    printf("stringName: %s\n", stringName); //Ricardo Mondini
    printf("boolType: %i\n", boolType); //1
}

void areaPerimeterCalculator(){

    double width, height, perimeter, area;
    int resp;

    do{

        printf("Inform the width: ");
        scanf("%lf", &width);

        printf("Inform the height: ");
        scanf("%lf", &height);

        perimeter = 2 * (width+height);
        area = width*height;

        printf("Perimeter: %g \n", perimeter);
        printf("Area: %g \n", area);

        printf("Press 1 to calc again, or 0 to close. \n");
        scanf("%d", &resp);


    }while(resp == 1);


}

void sizeOfExamples(){

    printf("int size: %d \n", sizeof(int));
    printf("short size: %d \n", sizeof(short));
    printf("long size: %d \n", sizeof(long));
    printf("long long size: %d \n", sizeof(long long));
    printf("float size: %d \n", sizeof(float));
    printf("double size: %d \n", sizeof(double));
    printf("long double size: %d \n", sizeof(long double));
    printf("char size: %d \n", sizeof(char));

    char teste[] = "Ricardo Mondini";
    printf("string size: %d \n", sizeof(teste));



}
