
/*
#include <stdio.h>

 int main() {

    printf("  xxxxxxx  \n");
    printf(" xx     xx \n");
    printf(" x  0 0  x \n");
    printf(" \\   >   / \n");
    printf("  \\  ~  /  \n");
    printf("   \\___/   \n");

    int eyes, nose;
    printf("Enter a number for the eyes: ");
    scanf("%d", &eyes);
    printf("Enter a number for the nose: ");
    scanf("%d", &nose);

    printf("  xxxxxxx  \n");
    printf(" xx     xx \n");
    printf(" x  %d %d  x \n", eyes, eyes);
    printf(" \\   %d   / \n", nose);
    printf("  \\  ~  /  \n");
    printf("   \\___/    \n");
    re

////////////////////////////////////////
    #include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // Note: in real world implementations we never 
    // utilize time(0) for seeding randomness
    srand(time(0));
    
    int a = rand();
    int *ptr, **pptr;
    
    ptr = &a;
    pptr = &ptr;

    printf("Exploring Pointers in Lab 02.\n");
    printf("Random Number: %d\n", a);
    printf("Current Time in Seconds: %d\n", (int)time(NULL));
    printf("Address of 'a': %p\n", (void *)&a);
    printf("Address stored in 'ptr': %p\n", (void *)ptr);
    printf("Address of 'ptr': %p\n", (void *)&ptr);
    printf("Value pointed by 'pptr': %p\n", (void *)*pptr);

    return 0;
}
    */
   /*
   #include <stdio.h>

   int main() {
   int length;
   printf ("Length: ");
   scanf("%d", &length);
   char symbol;
   printf("symbol:");
   scanf("%c", &symbol);

   for(int i = 1; i <= length; i++){
      for(int j = 1; j <= i; j++){
       // cout << setw(2)<<symbol;
       printf("%c", symbol);
      }
     printf("\n");
   }

    printf("\n"); printf("\n"); printf("\n");
   for(int i = length; i >= 1; i--){
      for(int j = 1; j <= i; j++){
       //cout << setw(2)<<symbol;
        printf("%c", symbol);
      }
     printf("\n");
   }
   
  return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include<stdio.h>

// int main()
// {
//         // Note: in real world implementations we never 
//         // utilize time(0) for seeding randomness
// 	int x = 567;
//   printf("The value of x in hexadecimal is: 0x%X\n", x);

// 	return 0;
// }
// #include <stdio.h>
// #include <math.h>

// const double RADIUS_EARTH = 6368.0; //in km

// typedef struct Location_struct {
//     char name[50];    //city name
//     double latitude;
//     double longitude;
//     double elevation;
// } Location;

// typedef struct WorldTour_struct {
//     Location locs[5];
//     double distances[5];
// } WorldTour;

// double calcDist(double lat1, double long1, double lat2, double long2) {
//     return RADIUS_EARTH*acos(cos(lat1*M_PI/180.0)*cos(lat2*M_PI/180.0)*cos((long2-long1)*M_PI/180.0) + sin(lat1*M_PI/180.0)*sin(lat2*M_PI/180.0));
// }

// WorldTour setDists(WorldTour aTrip) {
//     for (int i = 0; i < 4; i++) {
//         aTrip.distances[i] = calcDist(
//             aTrip.locs[i].latitude, aTrip.locs[i].longitude,
//             aTrip.locs[i+1].latitude, aTrip.locs[i+1].longitude
//         );
//     }
//     aTrip.distances[4] = calcDist(
//         aTrip.locs[4].latitude, aTrip.locs[4].longitude,
//         aTrip.locs[0].latitude, aTrip.locs[0].longitude
//     );
//     return aTrip;
// }

// int main() {
//     WorldTour myTrip;

//     for (int i = 0; i < 5; i++) {
//         printf("City %d:\n", i+1);
//         printf("Enter the city name:\n");
//         scanf("%s", myTrip.locs[i].name);
        
//         printf("Enter the city coordinates (lat long elev):\n");
//         scanf("%lf %lf %lf", &myTrip.locs[i].latitude, &myTrip.locs[i].longitude, &myTrip.locs[i].elevation);
//     }

//     myTrip = setDists(myTrip);

//     for (int i = 0; i < 5; i++) {
//         printf("Leg %d - %s to %s: %.2f km\n", i+1,
//             myTrip.locs[i].name,
//             myTrip.locs[(i+1)%5].name,
//             myTrip.distances[i]
//         );
//     }

//     return 0;
// }



//  #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//   int a = 5;
//   int b  = 8;
//   int* c = &a;

//   a = a + b;
//   c = &b;
//   b = b - 2;

//     printf("a = %d\n", a);
//      printf("b = %d\n", b);
//       printf("c -> %d\n", *c);
//     return 0;
// }
//////////////////////////////////
// #include <stdio.h>

// typedef struct Height{
//    int feet;
//    int inches;
// } Height;

// int main() {

//    Height annHeight;

//    annHeight.feet = 6;
//    annHeight.inches = 2;

//    printf("Ann: %dft %d\n", annHeight.feet, annHeight.inches);

//    return 0;
// }

// #include <stdio.h>

// typedef struct TimeHrMin_struct {
//   int hourValue;
//   int minuteValue;
// } TimeHrMin;

// TimeHrMin ConvHrMin(int totalTime) {
//   TimeHrMin timeStruct;

//   timeStruct.hourValue  = totalTime / 60;
//   timeStruct.minuteValue = totalTime % 60;

//   return timeStruct;
// }

// int main(void) {
//   int inTime;
//   TimeHrMin travelTime;

//   printf("Enter total minutes: ");
//   scanf("%d", &inTime);

//   travelTime = ConvHrMin(inTime);

//   printf("Equals: ");
//   printf("%d hrs ", travelTime.hourValue);
//   printf("%d mins\n", travelTime.minuteValue);

//   return 0;
// }


// /////////////////////////
// #include <stdio.h>

// typedef struct Home_struct {
//    int numBathrooms;
//    int numFloors;
//    int numPeople;
//    int numRooms;
// } Home;

// Home InitHome() {
//    Home tempHome;

//    tempHome.numBathrooms = 4;
//    tempHome.numFloors = 3;
//    tempHome.numPeople = 9;
//    tempHome.numRooms = 7;

//    return tempHome;
// }

// int main() {
//    Home myHome = InitHome();

//    printf("%d Bathrooms\n", myHome.numBathrooms);
//    printf("%d People\n", myHome.numPeople);

//    return 0;
// }

// ////////////////////////
// #include <stdio.h>
// #include <string.h>

// typedef struct Vehicle_struct {
//    char* color;
//    char* type;
// } Vehicle;

// void PrintVehicle(Vehicle myVehicle) {
//    printf("type: %s\n", myVehicle.type);
//    printf("color: %s\n", myVehicle.color);
// }

// int main() {
//    Vehicle myVehicle;

//    myVehicle.color = "pink";
//    myVehicle.type = "SUV";

//    PrintVehicle(myVehicle);

//    return 0;
// }
// ///////////////////////////////
// #include <stdio.h>

// typedef struct FruitStand_struct {
//    int numPlums;
//    int numPeaches;
// } FruitStand;

// FruitStand AddFruits(FruitStand stand1, FruitStand stand2) {
//    FruitStand newStand;

//    newStand.numPlums = stand1.numPlums + stand2.numPlums;
//    newStand.numPeaches = stand1.numPeaches + stand2.numPeaches;

//    return newStand;
// }

// int main() {
//    FruitStand stand1;
//    FruitStand stand2;
//    FruitStand standTotals;

//    stand1.numPlums = 1;
//    stand1.numPeaches = 10;

//    stand2.numPlums = 7;
//    stand2.numPeaches = 6;

//    standTotals = AddFruits(stand1, stand2);

//    printf("%d Plums\n", standTotals.numPlums);
//    printf("%d Peaches\n", standTotals.numPeaches);

//    return 0;
// }

// /*
// Function InitializeWeight() has two integer parameters. Complete the definition of function InitializeWeight() as follows:

// Declare a struct variable of type Weight.
// Assign the struct variable's pounds with parameter poundsVal.
// Assign the struct variable's ounces with parameter ouncesVal.
// Return the struct variable.
// Ex: If the input is 42 11, then the output is:

// Weight: 42 pounds 11 ounces
// */

// #include <stdio.h>

// typedef struct Weight_struct {
//    int pounds;
//    int ounces;
// } Weight;

// Weight InitializeWeight(int poundsVal, int ouncesVal) {

//    /* Your code goes here */
//    Weight Ahmed;
//    Ahmed.pounds = poundsVal;
//    Ahmed.ounces = ouncesVal;
//    return Ahmed;
   

// }

// int main(void) {
//    Weight weightInfo;
//    int poundsInput;
//    int ouncesInput;

//    scanf("%d", &poundsInput);
//    scanf("%d", &ouncesInput);

//    weightInfo = InitializeWeight(poundsInput, ouncesInput);

//    printf("Weight: %d pounds %d ounces\n", weightInfo.pounds, weightInfo.ounces);

//    return 0;
// }


// #include <stdio.h>

// int main(void) {
   
//    printf("Dog age in human years (dogyears.com)\n\n");
//    printf("-------------------------\n");
   
//    // set num char for each column, left aligned
//    printf("%-10s | %-12s\n", "Dog age", "Human age");
//    printf("-------------------------\n");
   
//    // set num char for each column, first col left aligned
//    printf("%-10s | %12s\n", "2 months", "14 months");
//    printf("%-10s | %12s\n", "6 months", "5 years");
//    printf("%-10s | %12s\n", "8 months", "9 years");
//    printf("%-10s | %12s\n", "1 year", "15 years");
//    printf("-------------------------\n");
   
//    return 0;
// }

// #include <stdio.h>

// void UpdateScoreVals(int scoreVals[], int numVals, int updateVal) {
//    int i;

//    for (i = 0; i < numVals; ++i) {
//       scoreVals[i] = scoreVals[i] - updateVal;
//    }
// }

// void PrintScoreVals(const int scoreVals[], int numVals) {
//    int i;

//    for (i = 0; i < numVals; ++i)  {
//       printf("%d\n", scoreVals[i]);
//    }
// }

// int main() {
//    const int NUM_SCORES = 4;
//    int quizScores[NUM_SCORES];
//    int scoreUpdate = 2;
//    int i;

//    for (i = 0; i < NUM_SCORES; ++i) {
//       scanf("%d", &(quizScores[i]));
//    }

//    UpdateScoreVals(quizScores, NUM_SCORES, scoreUpdate);
//    PrintScoreVals(quizScores, NUM_SCORES);

//    return 0;
// }

// #include <stdio.h>

//    int main() {
//    int length;
//    printf ("Length: ");
//    scanf("%d", &length);
//    char symbol;
//    printf("symbol:");
//    scanf("%c", &symbol);

//    for(int i = 1; i <= length; i++){
//       for(int j = 1; j <= i; j++){
//        // cout << setw(2)<<symbol;
//        printf("%c", symbol);
//       }
//      printf("\n");
//    }

//     printf("\n"); printf("\n"); printf("\n");
//    for(int i = length; i >= 1; i--){
//       for(int j = 1; j <= i; j++){
//        //cout << setw(2)<<symbol;
//         printf("%c", symbol);
//       }
//      printf("\n");
//    }
   
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//---------------------------------------------------------------------
// getArgs() - Retrieve & store command line arguments

// inputs/outputs:
//    int argc          number of args, including program executable name
//    char* argv[]      array of strings
//    int* rowPtr       first command line parameter - integer number of rows
//    char* charPtr     second command line parameter - character symbol to use
//    bool* triTypePtr  third command line parameter - triangle type: 0=isosceles 1=right
// default: 5 rows, using '*', isosceles triangle
//    set to default values if any command line parameter is missing

// void getArgs(int argc, char* argv[], int* rowPtr, char* charPtr, bool* triTypePtr) {
//     if(argc < 4){

//        printf("Invalid number of command line parameters.\nUsing default values...\n");

//         *rowPtr = 5;
//         *charPtr = '*';
//         *triTypePtr = false;  //isosceles;

//     }

//     else{
//         *rowPtr = atoi(argv[1]);
//         *charPtr = argv[2][0];
//         *triTypePtr   = atoi (argv[3]) == 1 ? true: false;

//     }

//     //TODO: write getArgs()
    

//     return;
// }

// //---------------------------------------------------------------------
// int main(int argc, char* argv[]) {
//     int rows;
//     char myChar;
//     bool triType;
    
//     //TODO: call getArgs() to set rows, myChar, and triType
//     getArgs(argc, argv, &rows, &myChar, &triType);

//     //print a triangle - variables
//     printf("rows: %d, myChar: %c, triType: %d\n", rows, myChar, triType);

//     //   rows: height of triangle
//     //   myChar: character to make triangle with
//     //   triType: 0/false = isosceles, 1/true = right
//     for (int i = 1; i <= rows; ++i) {
//         int k = 0;
//         for (int s = 1; s <= rows - i; ++s) {
//             printf("  ");
//         }
        
//         int cap = 2 * i - 1;
//         if (triType) {
//             cap = i;
//         }
        
//         while (k < cap) {
//             printf("%c ",myChar);
//             ++k;
//         }
//         printf("\n");
//     }

//   return 0;
// }



















// The condition if (argc < 4) comes from how command-line arguments are handled in C, specifically through the argc and argv parameters passed to the main() function.

// What is argc?
// argc stands for argument count, and it represents the number of command-line arguments passed to the program when it is executed, including the name of the program itself.
// Example: If you run your program like this:
// bash
// Copy code
// ./myTri.out 7 @ 0
// Here:
// argc will be 4 because four arguments are passed:
// ./myTri.out (the program's name)
// 7 (the first argument: number of rows)
// @ (the second argument: symbol)
// 0 (the third argument: triangle type)
// Explanation of if (argc < 4):
// if (argc < 4) checks if the number of arguments is less than 4.
// Since the program requires exactly 3 arguments to generate a triangle (7 @ 0), plus the program name, you need at least 4 elements in total for the program to function properly.
// If argc < 4, it means the user has either:
// Provided too few arguments.
// Or provided no arguments at all.
// In this case, the code falls back to default values and prints the message:
// c
// Copy code
// printf("Invalid number of command line parameters.\nUsing default values...\n");
// When the Condition Triggers:
// Example where argc would be less than 4: If the user runs the program like this:
// bash
// Copy code
// ./myTri.out 7
// argc would be 2 because only two arguments were provided (./myTri.out and 7), which is less than the required 4. Hence, the if (argc < 4) block would execute, using the default values for the triangle.
// In summary, if (argc < 4) ensures that the program has enough command-line arguments to operate. If not, it falls back on default settings for triangle generation.


/*
Define a function CurveGrade() that takes one integer parameter as the student's score and one character parameter passed by pointer as the student's grade. 
The function updates the grade with:

'B' if the score is greater than or equal to 65 and less than 85.
'A' if the score is greater than or equal to 85.
The function returns true if the grade has been updated, and returns false otherwise.
Ex: If the input is 78, then the output is:

Grade is curved to B.
*/
/*
#include <stdio.h>
#include <stdbool.h>
  
// Your code goes here 
bool CurveGrade(int studentScore, char* grade){
   // bool isUpdate = false;
   
   if(studentScore >= 65 && studentScore < 85){
      *grade = 'B';
      // isUpdate = true;
      return true;
      }
   else if(studentScore >= 85){
       *grade = 'A';
      //isUpdate = true;
      return true;
    
   }
      // return isUpdate;
      return false;
   }

int main(void) {
   int studentPoints;
	char curvedGrade;
   bool isChanged;

   curvedGrade = 'C';
   scanf("%d", &studentPoints);

   isChanged = CurveGrade(studentPoints, &curvedGrade);

   if (isChanged) {
      printf("Grade is curved to %c.\n", curvedGrade);
   }
   else {
      printf("Grade %c is not curved.\n", curvedGrade);
   }

   return 0;
}
*/
/////////////////////////////////////////////////////////////

// #include <stdio.h>

// double CalculateAverage(const double scoreVals[], int numVals) {
//    int i;
//    double scoreSum = 0.0;
   
//    for (i = 0; i < numVals; ++i) {
//       scoreSum = scoreSum + scoreVals[i];
//    }
   
//    return scoreSum / numVals;
// }

//  int main(void) {
//    const int NUM_SCORES = 4;    // Array size
//    double testScores[NUM_SCORES];  // User test scores
//    int i;
//    double averageScore;
   
//    // Prompt user to enter test scores
//    printf("Enter %d test scores:\n", NUM_SCORES);
//    for (i = 0; i < NUM_SCORES; ++i) {
//       printf("Test score: ");
//       scanf("%lf", &(testScores[i]));
//    }
//    printf("\n");
   
//    // Call function to calculate average
//    averageScore = CalculateAverage(testScores, NUM_SCORES);
//    printf("Average adjusted test score: ");
//    printf("%lf\n", averageScore);
   
//    return 0;
// }

// #include <stdio.h>

// void AdjustScores(double scoreVals[], int numVals, 
//                   double scoreAdj) {
//    int i;
   
//    for (i = 0; i < numVals; ++i) {
//       scoreVals[i] = scoreVals[i] + scoreAdj;
//    }

// }

// void PrintScores(const double scoreVals[], int numVals) {
//    int i;
   
//    for (i = 0; i < numVals; ++i) {
//       printf(" %lf", scoreVals[i]);
//    }
//    printf("\n");
   
// }

// double CalculateAverage(const double scoreVals[], int numVals) {
//    int i;
//    double scoreSum = 0;
   
//    for (i = 0; i < numVals; ++i) {
//       scoreSum = scoreSum + scoreVals[i];
//    }
   
//    return scoreSum / numVals;
// }

// int main(void) {
//    const int NUM_SCORES = 4;    // Array size
//    double testScores[NUM_SCORES];  // User test scores
//    int i;
//    double averageScore;
   
//    // Prompt user to enter test scores
//    printf("Enter %d test scores:\n", NUM_SCORES);
//    for (i = 0; i < NUM_SCORES; ++i) {
//       printf("Test score: ");
//       scanf("%lf", &(testScores[i]));
//    }
//    printf("\n");
   
//    // Print original scores
//    printf("Original test scores: ");
//    PrintScores(testScores, NUM_SCORES);
   
//    averageScore = CalculateAverage(testScores, NUM_SCORES);
//    printf("Average adjusted test score: ");
//    printf("%lf\n", averageScore);
   
   
//    AdjustScores(testScores, NUM_SCORES, 2.0);
   
//    printf("Adjusted test scores: ");
//    PrintScores(testScores, NUM_SCORES);
   
//    // Call function to calculate average
//    averageScore = CalculateAverage(testScores, NUM_SCORES);
//    printf("Average adjusted test score: ");
//    printf("%lf\n", averageScore);
   
//    return 0;
// }

// #include <stdio.h>

// int FindScore(const int scoreVals[], int numVals) {
//    int i;
//    int returnVal = scoreVals[0];

//    for (i = 1; i < numVals; ++i) {
//       if (scoreVals[i] < returnVal) {
//          returnVal = scoreVals[i];
//       }
//    }

//    return returnVal;
// }

// int main(void) {
//    const int NUM_SCORES = 3;
//    int quizScores[NUM_SCORES];
//    int i;
//    int returnScore;

//    for (i = 0; i < NUM_SCORES; ++i) {
//       scanf("%d", &(quizScores[i]));
//    }

//    returnScore = FindScore(quizScores, NUM_SCORES);
//    printf("%d\n", returnScore);

//    return 0;
// }

// #include <stdio.h>

// int FindChrysanthemums(const int chrysanthemumsArray[], int arraySize) {
// 	int indexFound = -1;

//    /* Your code goes here */
   
//    // if(arraySize == 19 && indexFound == -1){
//    //    indexFound = chrysanthemumsArray[];
//    //    }
//    //    return indexFound;
//   for(int i = 0; i < arraySize; ++i){
//      if(chrysanthemumsArray[i] == 19 && indexFound == -1){
//      indexFound = i;
//      }
//    }
//        return indexFound;
// }

// int main(void) {
//    const int MAX_SIZE = 100;
//    int chrysanthemumInputs[MAX_SIZE];
//    int inputSize;
//    int i;
// 	int index;

//    scanf("%d", &inputSize);
//    for (i = 0; i < inputSize; ++i) {
//       scanf("%d", &chrysanthemumInputs[i]);
//    }

//    index = FindChrysanthemums(chrysanthemumInputs, inputSize);

// 	if (index == -1) {
// 		printf("No order has 19 chrysanthemums.\n");
// 	}
// 	else {
// 		printf("The first order that has 19 chrysanthemums is at index %d.\n", index);
// 	}

//    return 0;
// }


// //Totalistic Cellular Automaton

// #include <stdio.h>
// #include <stdbool.h>

// const int WORLD_SIZE = 65;

// typedef struct cell_struct{
//     int localSum; // total sum of local cells, [left] + [me] + [right]: possible values are 0-6
//     int status;   // this cell's current status: 0, 1, or 2
//     int count;    // running accumulated count of this cell's active status for all generations
// } cell;

// // convert an integer rule (0-2186) to its base-3 representation, 
// // stored in reverse order, as an array of 7 status values, i.e. valArray[7] 
// //   ex: rule = 777  -> [0121001], since 777  = 1*3^1 + 2*3^2 + 1*3^3 + 1*3^6   
// //   ex: rule = 177  -> [0210200], since 177  = 2*3^1 + 1*3^2 + 2*3^4
// //   ex: rule = 2040 -> [0210122], since 2040 = 2*3^1 + 1*3^2 + 1*3^4 + 2*3^5 + 2*3^6
// //return true if input rule is valid (0-2186)
// //return false if input rule is invalid
//  bool setValArray(int valArray[7], int rule) {

//         //TODO: Task 1 - write the setValArray() function
//         if(rule < 0 || rule > 2186){
//             return false; // invalid rule
//         }
//         for(int i = 0; i < 7; i++){
//             valArray[i] = rule % 3; // convert to base-3
//             rule /= 3;
//         }

//         return true; // valid. rule
// }

// // update the localSum subitem for each cell in the world array based on the
// // current statuses for the nearby [left, me, right] cells
// // note: world is periodic/cyclic, with front-to-back and back-to-front wrapping 
// void setSums(cell world[WORLD_SIZE]) {

//     //TODO: Task 4 - write the setSums() function
//     for(int i = 0; i < WORLD_SIZE; i++){
//         int left = (i == 0) ? WORLD_SIZE -1 : i - 1;
//         int right = (i == WORLD_SIZE -1) ? 0 : i + 1;
//         world[i].localSum = world[left].status + world[i].status + world[right].status;
//     }

//    // return;
// }

// // Evolve the world to the next generation by updating each cell's status value 
// // using its localSum subitem (assumed to be updated outside of this function), where
// // ruleValArray[7] stores the status values for the 7 possible local sums, in reverse order, 
// // e.g. if local sum = 4, the new status value can be found at index 4 of the ruleValArray[].
// // This function must also update the count subitems for all cells in world[].
// // This function returns the total sum of all status values in world[] after the evolution step.
//  int evolveWorld(cell world[WORLD_SIZE], int ruleValArray[7]) {

//     //TODO: Task 6 - write the evolveWorld() function
//     int totalSum = 0;
//     for(int i = 0; i < WORLD_SIZE; i++){
//         world[i].status = ruleValArray[world[i].localSum];
//         world[i].count += world[i].status;
//         totalSum += world[i].status;
//     }

//     return totalSum;
// }
//  // Initialze the world with a single active cell in the middle
//  void initializeWorld(cell world[WORLD_SIZE], int initializeStatus){
//     for (int i = 0; i < WORLD_SIZE; i++){
//         world[i].status = 0;
//         world[i].count = 0;
//     }
//     world[WORLD_SIZE / 2].status = initializeStatus; // Active cell in the middle
//     setSums(world);
//  }

//  // print the world, showing '+' for status 2, '-' for status 1, and '' for status 0
//  void printWorld(cell world[WORLD_SIZE], int totalSum){
//     for (int i = 0; i < WORLD_SIZE; i++){
//         if (world[i].status == 2){
//             printf("+");
//         }
//         else if (world[i].status == 1){
//             printf("-");
//         } else {
//             printf(" ");
//         }
//     }
//     printf(" %d\n", totalSum);
//  }

//  // print the accumulated total sums for each cell 
//  void printTotalSums(cell world[WORLD_SIZE]){
//     // Top row: print tens digit or whitespace if < 10
//     for(int i = 0; i < WORLD_SIZE; i++){
//         if (world[i].count >= 10) {
//             printf("%d", world[i].count / 10);
//         } else {
//             printf(" ");
//         }
//     }
//     printf("\n");

//     // Bottom row: print the units digit
//     for (int i = 0; i < WORLD_SIZE; i++){
//         printf("%d", world[i].count % 10);
//     }
//     printf("\n");
//  }

// int main() {
//     cell world[WORLD_SIZE];
//     int rule;
//     int valArray[7];

//     printf("Welcome to the Totalistic Cellular Automaton!\n");

//     // printf("Enter the rule # (0-2186): ");
//     //TODO: Task 2 - read in a valid rule#, allowing repeated attempts if necessary,
//     //      generate the rule's 7-trit (i.e. 7 base-3 digits) status value array,  
//     //      print the status value arrxay in correct ternary (i.e. base-3) number order
//     do {
//         printf("Enter the rule # (0-2186): \n");
//         scanf("%d", &rule);
//     }while(!setValArray(valArray, rule)); // continue until a valid rule is provided

//     // print the rule in ternary (base 3) representation
//      printf("Rule in ternary: ");
//     for (int i = 6; i >= 0; i--){
//         printf("%d", valArray[i]);

//     }
//     printf("\n");
    

//     // printf("The evolution of all possible states are as follows:\n");
//     //TODO: Task 3 - use the rule status value array to report the evolution 
//     //      step for all possible cell neighbor states [left, me, right].
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//         printf("The evolution of all possible states are as follows:\n");

//         // for (int i = 6; i >= 0; i--) {
//         //     printf("%d%d%d -> %d\n", i / 3, i % 3, i % 3, valArray[i]);
//         // }
//       //   for(int left = 0; left < 3; left++){
//       //       for (int me = 0; me < 3; me++){
//       //           for(int right = 0; right < 3; right++){
//       //               int localSum = left + me + right;
//       //               printf("%d%d%d -> %d\n", left, me, right, valArray[]);
//       //           }
//       //       }
//       //   }
//       for (int left = 0; left < 3; left++) {
//     for (int me = 0; me < 3; me++) {
//         for (int right = 0; right < 3; right++) {
//             int localSum = left + me + right;  // Fix the typo: changed 'localsum' to 'localSum'
//             printf("%d%d%d -> %d\n", left, me, right, valArray[localSum]);
//         }
//     }
// }




//     // printf("Enter the number of generations (1-49): ");     
//     //TODO: Task 5a - read in the total number of generation evolution steps
//     //      from the user, allowing repeated attempts for invalid values.
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//     int generation;
//     do{
//         printf("Enter the number of generations (1-49): "); 
//         scanf("%d", &generation);
//     }while(generation < 1 || generation > 49);
    
//     // printf("Enter the value (1 or 2) for the initial active cell: ");
//     //TODO: Task 5b - read in the initial status value for the middle cell, 
//     //      allowing repeated attempts for invalid values. 
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//     int initialStatus;
//     do{
//         printf("Enter the value (1 or 2) for the initial active cell: ");
//         scanf ("%d", &initialStatus);

//     } while (initialStatus != 1 && initialStatus != 2);

//     printf("Initializing world & evolving...\n");
//     //TODO: Task 5c - initialize the world with the ONLY non-zero cell in the 
//     //      exact middle of the world, whose status value is set using the 
//     //      scanned-in value from the user above. Make sure to also set the 
//     //      localSum subitem for each cell of the initial world.
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//          initializeWorld(world, initialStatus);


//     //TODO: Task 7 - evolve the world the user-specified number of generations,
//     //      printing the world after each evolution step, where each cell prints as
//     //      '+', '-', or ' ' (whitespace) for status value of 2, 1, or 0, respectively.
//     //      After the world display, also print out the total sum of all status values.
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//     //
//     //      Ex: world = [00000000000000000020101212111001210011121210102000000000000000000]
//     //          display->                  + - -+-+---  -+-  ---+-+- - +                   28 <-display
//     //
//     //      At the end of ALL evolution steps, print a line under the last generation. 
//     //      Ex: world = [02211210000121122111001121121001210012112110011122112100001211220]
//     //          display-> ++--+-    -+--++---  --+--+-  -+-  -+--+--  ---++--+-    -+--++  64 <-display
//     //          display->_________________________________________________________________<-display
//        for (int gen = 0; gen < generation; gen++){
//         printWorld(world, evolveWorld(world, valArray)); // print the world after each step
//         setSums(world); // update the local sums after evolution
//        }
       
//        printf("_________________________________________________________________\n");


//     //TODO: Task 8 - after the line under the last generation, 
//     //      print the total sum for each cell throughout all evolution steps vertically.
//     //      The cell total sums should be printed as two digit numbers across two lines.
//     //      Single-digit total sums should be represented as a whitespace on the top line, 
//     //      and the single-digit on the lower line. 
//     //      For total sums of zero, print both digits as whitespaces.
//     //      Follow the format, including whitespaces, of the sample output EXACTLY.
//     //
//     //      Ex: consider a world after many evolution steps with the following final generation:
//     //          display-> ++--+-    -+--++---  --+--+-  -+-  -+--+--  ---++--+-    -+--++  64 <-display
//     //          display->_________________________________________________________________<-display   
//     //          display->            11111111122121222233233222212122111111111            <-display 
//     //          display-> 243666698963456647182091851471191174158190281746654369896666342 <-display 
//     //                   ^ ^                             ^
//     //      note: the first cell was ALWAYS 0, so its total sum is zero, and prints as two whitespaces
//     //            the third cell has a total sum of 4, so it prints as a whitespace above the digit 4
//     //            the middle cell has a total sum of 29, so it prints the digit 2 above the digit 9

//     printTotalSums(world); // Task 8: print accumulated totals

    
    
//     printf("\n"); // make sure to end your program with a newline

//     return 0;
// }

// "New" means new compared to previous level
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Home_struct {
//    int numRooms;
//    int numOccupants;
// } Home;

// void Home_SetData(Home* itemPtr, int rooms, int occupants) {
//    if (itemPtr == NULL) return;
   
//    itemPtr->numRooms = rooms;
//    itemPtr->numOccupants = occupants;
// }

// // New: Home_AddOccupants()
// void Home_AddOccupants(Home* itemPtr, int occupants) {
//    if (itemPtr == NULL) return;

//    itemPtr->numOccupants += occupants;
// }

// void Home_PrintHome(Home* itemPtr) {
//    if (itemPtr == NULL) return;
   
//    printf("%d occupants, %d rooms\n", itemPtr->numOccupants, itemPtr->numRooms); 
// }

// int main(void) {
//    Home* myHome = NULL;

//    myHome = (Home*)malloc(sizeof(Home));

//    Home_SetData(myHome, 5, 3);
//    Home_PrintHome(myHome);

//    Home_AddOccupants(myHome, 1);
//    Home_PrintHome(myHome);

//    free(myHome);

//    return 0;
// }


// // Here’s a possible implementation:

// void appendTime(Time** timeArr, int* n, int hrs, int mns, int scs) {
//     // Allocate a new array with one more element than the current array
//     Time* newArr = malloc((*n + 1) * sizeof(Time));
    
//     // Copy the old array into the new one
//     for (int i = 0; i < *n; ++i) {
//         newArr[i] = (*timeArr)[i];
//     }
    
//     // Assign the new time at the end of the new array
//     newArr[*n].hours = hrs;
//     newArr[*n].minutes = mns;
//     newArr[*n].seconds = scs;
    
//     // Free the old array
//     free(*timeArr);
    
//     // Point the original array to the new one
//     *timeArr = newArr;
    
//     // Update the size of the array
//     (*n)++;
// }
// // 2. TimeDifference()
// // This function will compute the difference between two Time values and store the result in diff. It should handle any "borrowing" from hours or minutes when 
// // the seconds or minutes go negative.Here’s an implementation that ensures non-negative minutes and seconds:

// void TimeDifference(Time* diff, Time* end, Time* start) {
//     // Initialize diff with the difference of hours, minutes, and seconds
//     diff->hours = end->hours - start->hours;
//     diff->minutes = end->minutes - start->minutes;
//     diff->seconds = end->seconds - start->seconds;

//     // Adjust if seconds are negative
//     if (diff->seconds < 0) {
//         diff->seconds += 60;
//         diff->minutes -= 1;
//     }
    
//     // Adjust if minutes are negative
//     if (diff->minutes < 0) {
//         diff->minutes += 60;
//         diff->hours -= 1;
//     }
// }
// // 3. calcTimeDiffs()
// // This function will create a new array that stores the time differences between each time and the first time in the array (the winner). It uses TimeDifference() 
// // for the calculation. Here’s how you can implement this:

// Time* calcTimeDiffs(Time* timeArr, int n) {
//     // Allocate a new array to store the time differences
//     Time* diffArr = malloc(n * sizeof(Time));
    
//     // Calculate the difference for each Time from the first Time (the winner)
//     for (int i = 0; i < n; ++i) {
//         TimeDifference(&diffArr[i], &timeArr[i], &timeArr[0]);
//     }
    
//     return diffArr;
// }
// // 4. Freeing dynamically allocated memory in main()
// // You must free all dynamically allocated arrays after you are done using them. For this exercise, you’ll free the finishTimes and backTimes arrays:

// // At the end of main, after using the arrays
// free(finishTimes);
// free(backTimes);
// // This should cover all the required tasks for the exercise. Let me know if you need any further clarification or help!

// For this exercise, here’s how you can approach each of the TODO tasks:

// Dynamic memory allocation for the array (Task #1):

// You’ll want to allocate memory for an integer array dynamically, using malloc. For example, change the example allocation for a double array to allocate space for integers.
// c
// Copy code
// int *nums = (int *)malloc(sizeof(int) * sz);
// Filling the array from user input (Task #2):

// You can scan values into the dynamically allocated array using a pointer. Instead of square brackets, you will use pointer arithmetic.
// c
// Copy code
// int *ptr = nums; // separate pointer for traversal
// for (int i = 0; i < sz; i++) {
//     scanf("%d", ptr);
//     ptr++;
// }
// Printing Line 1 (Task #3):

// Begin at the first byte of the nums array and print every third byte as a character. Remember that you need to access the bytes of the integers, so you should cast the pointer to a char*.
// c
// Copy code
// char *bytePtr = (char *)nums;
// for (int i = 0; i < sz * sizeof(int); i += 3) {
//     printf("%c", *(bytePtr + i));
// }
// Printing Line 2 (Task #4):

// For this line, you start from the second-to-last byte and work backward through the array.
// c
// Copy code
// for (int i = sz * sizeof(int) - 2; i >= 0; i -= 3) {
//     printf("%c", *(bytePtr + i));
// }
// Printing Line 3 (Task #5):

// For the third line, you start at the third byte and print every third byte going forward.
// c
// Copy code
// for (int i = 2; i < sz * sizeof(int); i += 3) {
//     printf("%c", *(bytePtr + i));
// }
// Freeing the dynamically allocated memory (Task #6):

// After you’ve finished using the array, you need to free the dynamically allocated memory.
// c
// Copy code
// free(nums);

// The code outline with the TODOs replaced should look like this:

// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int sz;
//     scanf("%d", &sz); 

//     // Allocate memory for the integer array
//     int *nums = (int *)malloc(sizeof(int) * sz);

//     // Fill the array with user input
//     int *ptr = nums;
//     for (int i = 0; i < sz; i++) {
//         scanf("%d", ptr);
//         ptr++;
//     }

//     printf("Line 1: ");
//     // Print the first line (every 3rd byte starting from the 1st byte)
//     char *bytePtr = (char *)nums;
//     for (int i = 0; i < sz * sizeof(int); i += 3) {
//         printf("%c", *(bytePtr + i));
//     }
//     printf("\n");

//     printf("Line 2: ");
//     // Print the second line (every 3rd byte starting from the second-to-last byte, moving backwards)
//     for (int i = sz * sizeof(int) - 2; i >= 0; i -= 3) {
//         printf("%c", *(bytePtr + i));
//     }
//     printf("\n");

//     printf("Line 3: ");
//     // Print the third line (every 3rd byte starting from the 3rd byte)
//     for (int i = 2; i < sz * sizeof(int); i += 3) {
//         printf("%c", *(bytePtr + i));
//     }
//     printf("\n");

//     // Free dynamically allocated memory
//     free(nums);

//     return 0;
// }

// This approach follows the guidelines for pointer arithmetic and dynamic memory management while revealing the 
// hidden messages in the integer array.

// void PrintValue(int* valuePointer) {
//    if (valuePointer == NULL) {
//       printf("Pointer is null\n");
//    }
//    else {
//       printf("%d\n", *valuePointer);
//    }
// }

// int main(void) {
//    int someInt = 5;
//    int* valPointer = NULL;

//    PrintValue(valPointer);
//    valPointer = &someInt;        
//    PrintValue(valPointer);

//    return 0;
// }

// #include <stdio.h>

// int main(void) {
//    int someNumber;
//    int* numberPointer;

//    someNumber = 7;
//    numberPointer = &someNumber;

//    printf("%d %d\n", someNumber, *numberPointer);

//    return 0;
// }

// #include <stdio.h>

// int main(void) {
//    int someNumber;
//    int otherNumber;
//    int* numberPointer;

//    someNumber = 4;
//    otherNumber = 9;

//    numberPointer = &someNumber;
//    *numberPointer = 11;

//    printf("%d %d\n", someNumber, otherNumber);

//    return 0;
// }

// #include "stdio.h"

// int main(int argc, char* argv[]) {
//    int i;

//    // Prints argc and argv values
//    printf("argc: %d\n", argc);
//    for (i = 0; i < argc; ++i) {
//       printf("argv[%d]: %s\n", i, argv[i]);
//    }

//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /// Usage: program username userage 
// int main(int argc, char* argv[]) {
//    char nameStr[100];       // User name
//    char ageStr[100];        // User age

//    // Get inputs from command line
//    strcpy(nameStr, argv[1]);
//    strcpy(ageStr, argv[2]);
   
//    // Output result
//    printf("Hello %s. ", nameStr);
//    printf("%s is a great age.\n", ageStr);
   
//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /* Usage: program username userage */
// int main(int argc, char* argv[]) {
//    char nameStr[100];       // User name
//    char ageStr[100];        // User age
   
//    // Check if correct number of arguments provided
//    if (argc != 3) {
//       printf("Usage: myprog.exe name age\n");
//       return 1; // 1 indicates error
//    }
   
//    // Grab inputs from command line
//    strcpy(nameStr, argv[1]);
//    strcpy(ageStr, argv[2]);
   
//    // Output result
//    printf("Hello %s. ", nameStr);
//    printf("%s is a great age.\n", ageStr);
   
//    return 0;
// }

// #include "stdio.h"

// int main(int argc, char* argv[]) {
//    int i;

//    // Prints argc and argv values
//    printf("argc: %d\n", argc);
//    for (i = 0; i < argc; ++i) {
//       printf("argv[%d]: %s\n", i, argv[i]);
//    }

//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char* argv[]) {
//   FILE* inFile = NULL; // File pointer                                          
//   int fileNum1;        // Data value from file                                  
//   int fileNum2;       // Data value from file                                  

//   // Check number of arguments                                                  
//   if( argc != 2 ) {
//     printf("Usage: myprog.exe inputFileName\n");\
//     return 1; // 1 indicates error                                              
//   }

//   // Try to open the file                                                       
//   printf("Opening file %s.\n", argv[1]);

//   // opens a file for reading "r" and adding text "+"
//   inFile = fopen(argv[1], "r+");
//   if( inFile == NULL ) {
//     printf("Could not open file %s.\n", argv[1]);
//     return -1; // -1 indicates error                                            
//   }

//   // Can now use fscanf(inFile, ...) like scanf()                               
//   // myfile.txt should contain two integers, else problems                      
//   printf("Reading two integers.\n");
//   fscanf(inFile, "%d %d", &fileNum1, &fileNum2);

//   // Done with file, so close it                                                
//   fprintf(inFile, "\nClosing file %s.\n\n", argv[1]); // telling the program to print "closing file" to inFile, but doesn't do it right away
//   fflush(inFile); // DO everything we told the program to do to "inFile"
//   fclose(inFile);

//   // Output values read from file                                               
//   printf("num1: %d\n", fileNum1);
//   printf("num2: %d\n", fileNum2);
//   printf("num1 + num2: %d\n", (fileNum1 + fileNum2));

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char* argv[]) {
//  int sum = 0;
//   printf("argc = %d\n", argc);
//   printf("lests see what is in argv[]\n");
// if(argc > 1){
//   for(int i = 1; i < argc; i++){
//    printf("argv[%d] = %s\n", i, argv[i]);
//    sum += atoi(argv[i]);
//   }
//   printf("Total = %d\n", sum);

// }
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct myItem_struct {
   int num1;
   int num2;
} myItem;

void myItem_PrintNums(myItem* itemPtr) {
   if (itemPtr == NULL) return;
   
   printf("num1: %d\n", itemPtr->num1);
   printf("num2: %d\n", itemPtr->num2);
}

int main(void) {
   myItem* myItemPtr1 = NULL;
   
   myItemPtr1 = (myItem*)malloc(sizeof(myItem));
   
   myItemPtr1->num1 = 5;
   (*myItemPtr1).num2 = 10;
   
   myItem_PrintNums(myItemPtr1);

   free(myItemPtr1);
   
   return 0;
}