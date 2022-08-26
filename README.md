# physics-assignment-viewer
I'll be uploading all 20 of my old computational physics assignments here under a Dear ImGui application while I learn programming. Thought I'd start with code I already have.

Chances are if you're a computational physics student, half of the code I've written will work--I suggest avoiding using it because I have no idea how to optimise it. I'm doing this purely to learn C++ and making desktop applications. I'd rather you just write your own code, because how else are you gonna learn? Plus, 9 times out of 10 you'll be writing a command line program. This is going to be a desktop app written in C++ using Vulkan as a renderer. It's overkill.

________________________________________________________________________________________________
# Included Assignments

## Assignment 1: Supercomputer Energy Usage and Carbon Footprint
The task is simple, an introductory program that'd be sufficiently realised on an programming interview. The task is to calculate and print out the power consumption (in Watt) and the annual energy consumption (in MWhs) of a computer. It will then also out put the amount of carbon dioxide (in kgs) produced each year in order to run the computer. The program takes an input of CPU cores and average uptime (as a percentage) of the cores. As an example, a laptop may have 4 cores and is active for 6 hours a day and idle the rest of the time. Therefore, the appropriate input is 4 CPU cores with an uptime of 25%.

## Assignment 2: Legendre Polynomials

Legendre Polynomials are solutions to the following differential equation. They come up all the time in physics and are particularly useful for fields such as electric fields, gravitational fields and even potential fields in quantum mechanics.

$$ \frac{d}{dx} \Big[(1-x^2)\frac{d}{dx}P_n(x)\Big] +n(n+1)P_n(x) = 0 $$

These can be analytically solved, but seeing as I'm writing a program it's a lot more interesting to just write a numerical method for solving it. Fortunately, it comes with a a nice recursive formula for points $ n \geq 2 $. $n = 0$ and $n = 1$ are trivial, $1$ and $x$ respectively. This recursive formula is given below, 

$$ n P_n(x) = (2n -1)xP_{n-1}(x) - (n-1)P_{n-2}(x) $$

I intend to learn a little about plotting things. I think I might make some draw calls here in a viewport and see if I can't get it to draw a graph of the Legendre polynomials.

Assignment 3: Roof Construction
