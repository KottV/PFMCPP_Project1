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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:        lead singer
//  action 1:    lead singer sings
leadSinger.sing();
//  action 2:    lead singer dances
leadSinger.dance();
//  action 3:    lead singer smiles
leadSinger.smile();
//  2)
//  Noun:        lead guitarist
//  action 1:    lead guitarist plays guitar
leadGuitarist.playGuitar();
//  action 2:    lead guitarist sings
leadGuitarist.sing();
//  action 3:    lead guitarist tunes instrument
leadGuitarist.tuneInsrument();
//  3)
//  Noun:        drummer
//  action 1:    drummer plays drums
drummer.playDrums();
//  action 2:    drummer screams
drummer.scream();
//  action 3:    drummer throws sticks
drummer.throwSticks();
//  4)
//  Noun:        bassist
//  action 1:    bassist plays bass
bassist.playBass();
//  action 2:    bassist sings
bassist.sing();
//  action 3:    bassist smiles
bassist.dance();
//  5)
//  Noun:        rhytm guitarist
//  action 1:    rhytm guitarist plays guitar
rythmGuitarist.playGuitar();
//  action 2:    rhytm guitarist smiles
rythmGuitarist.smile();
//  action 3:    rhytm guitarist tunes instrument
rythmGuitarist.tuneInsruments();
//  6)
//  Noun:        pianist
//  action 1:    pianist plays keys
pianist.playKeys();
//  action 2:    pianist sings
pianist.sing();
//  action 3:    pianist claps
pianist.clap();
//  7)       
//  Noun:        stage worker
//  action 1:    stage worker loads
stageWorker.load();
//  action 2:    stage worker connects
stageWorker.connect();
//  action 3:    stage worker tunes instrument
stageWorker.tuneInsruments();
//  8)
//  Noun:        mix engineer
//  action 1:    mix engineer routes
mixEngineer.route();
//  action 2:    mix engineer controls
mixEngineer.control();
//  action 3:    mix engineer yawns
mixEngineer.yawn();
//  9)
//  Noun:        bus driver
//  action 1:    bus driver loads
busDriver.load();
//  action 2:    bus driver drives bus
busDriver.driveBus();
//  action 3:    bus driver sleeps
busDriver.sleep();
//  10)
//  Noun:        producer
//  action 1:    producer sleeps
producer.sleep();
//  action 2:    producer drinks
producer.drink();
//  action 3:    producer eats
producer.eat();


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
