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
//  Noun:       screwdriver
//  action 1:   the screwdriver screws 
screwdriver.screw();
//  action 2:   the screwdriver unscrews
screwdriver.unscrew();
//  action 3:   the screwdriver strips
screwdriver.strip();

//  2)
//  Noun:       torch
//  action 1:   the torch burns
torch.burn();
//  action 2:   the torch lights
torch.light();
//  action 3:   the torch shows the direction of wind
torch.showDirectionOfWind();

//  3)
//  Noun:       sportsCar
//  action 1:   the sports car shifts gear
sportsCar.shiftGear();
//  action 2:   the sports car speeds up
sportsCar.speedUp();
//  action 3:   the sports car slows down
sportsCar.slowDown();
 
//  4)
//  Noun:       synth
//  action 1:   the synth sequences
synth.sequence();
//  action 2:   the synth arpeggiates
synth.arp();
//  action 3:   the synth modulates
synth.modulate();

//  5)
//  Noun:       tapeMachine
//  action 1:   the tape machine playacks
tapeMachine.playback();
//  action 2:   the tape machine stops
tapeMachine.stop();
//  action 3:   the tape machine reverses
tapeMachine.reverse();

//  6)
//  Noun:       delay effect
//  action 1:   the delay records the buffer
delay.recordBuff();
//  action 2:   the delay playbacks the buffer
delay.playBackBuff();
//  action 3:   the delay feedsback
delay.feedBack();

//  7)
//  Noun:       sequencer
//  action 1:   the sequencer sends gates
sequencer.sendGate();
//  action 2:   the sequencer sends pitch information
sequencer.sendPitch();
//  action 3:   the sequencer receives clock
sequencer.receiveClock();

//  8)
//  Noun:       baby
//  action 1:   the baby laughs
baby.laugh();
//  action 2:   the baby sleeps
baby.sleep();
//  action 3:   the baby poops
baby.poop();

//  9)
//  Noun:       camera
//  action 1:   the camera takes a picture
camera.takePicture();
//  action 2:   the camera switches frame
camera.switchFrame();
//  action 3:   the camera unwinds roll
camera.unwindRoll();

//  10)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird perches
bird.perch();
//  action 3:   the bird sings
bird.sing();


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
