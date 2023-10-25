# C - Makefiles

* A Makefile is a config file used to automate the build process of a project.
* When Makefiles are used:
  * large projects (with many source files)
  * complex dependencies (to manage them efficiently)
  * cross-platform development (to build projects on different OSs)
* Why Makefiles are used:
  * automation (compilation commands done once)
  * dependency management (specify dependencies)
  * consistency (ensures local and production environment is identical)
  * maintainability of the build process

<br>

Basic syntax of a rule structure in Makefile:
```
target: dependencies
    [command(s) to build target]
```
* target: the executable to be generated
* dependencies: the source files
* command(s): shell commads. Must be preceded by Tab

### References:
ChatGPT
