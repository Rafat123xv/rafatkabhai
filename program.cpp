#include "splashkit.h"
#include <string>

#define STROUHAL 0.33

//Calculate resultant STROUHAL air speed by reading in freq and amp
double calculate_air_speed(double freq, double amp)
{
     double result;
     result = freq * amp *0.01 / STROUHAL; //amp is converted from CM to M
     return result;
}

// SIT102: CALCULATING AMP AND FREQ
void output_air_speed(string name, double freq, double amp)
{
    write(name + ": ");
    write_line(calculate_air_speed(freq, amp));
} 

//Return a string of the input line from the terminal 
string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

// SIT 102
double read_integer(string prompt)
{
     string line;
     line = read_string(prompt);
     return convert_to_integer(line);
}


//SIT 102 main body
int main()
{
    // declare variables 
    string name;
    string student_id;
    int age;
    string bird_name;
    double frequency;
    double amplitude;

    //get user details
    name = read_string("What is your full name: ");
    student_id = read_string("What is your student id??: ");
    age = read_integer("What is your age: ");
    bird_name = read_string("what is the name of the bird: ");
    frequency = read_string("what is the frequency of the bird in beating its wings: ");
    amplitude = read_string("what is the amplitude  of its stroke: ");



//output to terminal
write_line("");
write("Hello, ");
write_line(name + "!");
write("your student id is: ");
write_line(student_id);
write("Age: ");
write_line(age);
write("birds name: ");
write_line(bird_name);
write("frequency: ");
write_line(frequency);
write("amplitude: ");
write_line(amplitude);
write_line("");

//declare variables again for the second part




//output two

write_line("");
write_line("your age in 10 year will be: ");
write(age + 10);

//SIT102 COMMENT THWE TWO FOLLOWING LINES
output_air_speed(bird_name,frequency,amplitude);
write_line("");
write_line("is there anything i can do for you???????");
write_line("");
write_line("*end of the program. Thanks for using me *");

return 0;
}
