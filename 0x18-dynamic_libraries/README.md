### Dynamic Libraries <br>
#### To create a dynamic library: <br>
- create your .c file(s)<br>
- compile ```-c``` with ```-fPIC``` flag<br>
	- Position Independent Code _enables the address of shared libraries to be relative so that the executable is independent of the position of libraries_<br>
- then create dynamic lib<br>
	- ```gcc -shared libname.so objectfile.o```<br>

