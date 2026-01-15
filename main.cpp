#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)            car
//  Noun:
//  action 1:     the car accelerates
car.accelerate();
//  action 2:     the car brakes
car.brakes();
//  action 3:     the car turns
car.turns();

//  2)
//  Noun:        person
//  action 1:    the person walks
person.walks();
//  action 2:    the person jogs
person.jogs();
//  action 3:    the person runs
person.runs();

//  3)            audio
//  Noun:
//  action 1:     the audio plays
audio.play();
//  action 2:     the audio mutes
audio.mute();
//  action 3:    audio volume up
audio.volumeUp();

//  4)
//  Noun:        machine
//  action 1:    the machine starts
machine.start();
//  action 2:    the machine operates
machine.operate();
//  action 3:    the machine stops
machine.stop();

//  5)
//  Noun:        bee
//  action 1:    the bee flies
bee.fly();
//  action 2:    the bee stings
bee.sting();
//  action 3:    the bee pollinates
bee.pollinate();

//  6)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog runs
dog.run();
//  action 3:    the dog sleeps
dog.sleep();

//  7)
//  Noun:        cat
//  action 1:    the cat purrs
cat.purr();
//  action 2:    the cat meows
cat.meow();
//  action 3:    the cat sleeps
cat.sleep();

//  8)
//  Noun:        cow
//  action 1:    the cow moos
cow.moo();
//  action 2:    the cow eats
cow.eat();
//  action 3:    the cow moves
cow.move();

//  9)
//  Noun:        band
//  action 1:    the band plays a song
band.playSong();
//  action 2:    the band plays a concert    
band.playConcert();
//  action 3:    the band records a song
band.recordsSong();
//  10)
//  Noun:        computer
//  action 1:    computer blows up
computer.blowUp();
//  action 2:    computer takes over world
computer.takeOverWorld();
//  action 3:    computer destroys humans
computer.destroyHumans();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
