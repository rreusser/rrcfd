# RRCFD 0.0.0b

## Features:

* Solves Incompressible Euler Equations
  * Semi-Lagrangian solver with Pressure-projection
  * 3-D Marker-And-Cell staggered grid
  * Gauss-Seidel iteration with Successive Over-Relaxation
* Scalar advection with buoyancy
  * Tri-linear interpolation
  * Neumann boundary conditions
* No need for input parameters...
* Graphics
  * X11 interface
  * Volumetric rendering with self-shadowing
  * Variable zoom factor
* I/O:
  * Performs render/display for precalculation
  * Reads back rendered files for animation
  * Loops back to start on completion

## Usage:

To get up and running quickly:
    
    $ make
    $ make run
    $ make read

### Rendering pass:

    $ ./fluid [zoom_factor] [grid_size] > [data_file]

'zoom\_factor' is the zoom factor of the graphical output, and grid\_size is the size of the 3-D computational grid. I recommend starting at about 50, although it works down to about 35 and as high as you can afford!  100 or 150 is worth the time, but 100^3 = 1000000...

e.g.

    $ ./fluid 4 100 > run_100.dat


### Playback pass:

    $ ./fluid [zoom_factor ] < [data_file]

e.g.

    $ ./fluid 4 < run_100.dat

Just for fun, pass the program its own source, i.e.

    $ ./fluid 4 < fluid.c > self_run.dat
    $ ./fluid 4 < self_run.dat
