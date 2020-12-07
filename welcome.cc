/*
 *  C++ Magic 8 ball guessing game
 
 */

#include <iostream>
#include <string> // use string type
#include <stdlib.h> // rand(), strand()
#include <ctime> //seed

using namespace std;


// seed the range with a different number each time you
// run the program so you get a different number each time

//objects

    class magicBall {
        // to do:
        //range of 0 to 19
        public: 
           
            //int guess = 10;
            int max = 19;
            int min = 0;
            int generate = rand() % max + min;

    };


    
    // execute program
    
int main() 
{
    srand ( time(NULL) );
  
     string predict[20] = {
        "As I see it, yes",
        "Ask again later",
        "Better not tell you now",
        "Cannot predict now",
        "Concentrate and ask again",
        "Don't count on it",
        "It's certain",
        "It is decidedly so",
        "Most Likely",
        "My reply is no",
        "My sources say no",
        "Outlook not so good",
        "Outlook good",
        "Try again",
        "Signs point to yes",
        "Very doubtful",
        "Without a doubt",
        "Yes",
        "Yes, Definitely",
        "You may rely on it"
        
    };
   
    //instantiate objects
    magicBall shakeMe;
    
    if(shakeMe.generate)
    {
        //return value
       
        cout << "your answer: " << predict[shakeMe.generate] << endl;
        cout << "number generated: " << shakeMe.generate;
    }
    else {
        cout << "program error!";
        cout << "return error value: " << shakeMe.generate;
    }
    
    
    
    return 0; //end
}
