# DS-011-306-Programs
Programs for Prof. Gholamy DS-011-306 class.

## Usage
This package uses CMake.

### Targets
Targets are named according to their chapter number and question number, so "C1Q2" simply points to question 2 in chapter 1 and `Chapter1/Q2.cpp` program.

### CLion and Visual Studio
1. Import the project as a CMake project.
2. Choose the target you want to build.
3. Run!

| 1 |  <img width="801" alt="Screen Shot 2022-11-08 at 1 09 53 PM" src="https://user-images.githubusercontent.com/26668659/200530040-ebe841f4-9d9a-41ae-8942-75e60ac1bad6.png"> |
| --- | ----------- |
| 2 | <img width="508" alt="Screen Shot 2022-11-08 at 1 14 42 PM" src="https://user-images.githubusercontent.com/26668659/200531060-a3ff5319-62ff-4d2f-9dfa-3e8e3489318a.png"> |
| 3 | <img width="240" alt="Screen Shot 2022-11-08 at 1 15 14 PM" src="https://user-images.githubusercontent.com/26668659/200531146-c18fa80f-60a6-4347-8ff8-995d1bd14b0b.png">  |

### Using CMake
In this example, the "C1Q2" is the taget to build.

```bash
cmake CMakeLists.txt
make C1Q2
./C1Q2
```

