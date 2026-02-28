cmake_minimum_required(VERSION 3.10)
project(c_notes C)

set(CMAKE_C_STANDARD 11)

add_compile_options(
    -Wall
    -Wextra
    -Wpedantic
    -Wconversion
    -g
    -O0
)

# ========== 01_FUNDAMENTALS ==========
add_executable(fund_02_arithmetic_comparative_logic_operators 01_Fundamentals/02_arithmetic_comparative_logic_operators.c)
add_executable(fund_03_loops_functions 01_Fundamentals/03_loops_functions.c)

# ========== 02_STRUCTURES ==========
add_executable(struct_04_structs_typedef_modules 02_Structures/04_structs_typedef_modules.c)
add_executable(struct_05_module_example 02_Structures/05_module_example.c)

# ========== EXERCISES/01_CONDITIONAL-STRUCTURES ==========
add_executable(exercise_conditional_01 Exercises/01_Conditional-Structures/01_conditional_structures_exercise.c)
add_executable(exercise_conditional_02 Exercises/01_Conditional-Structures/02_multiple_conditions_exercise.c)

# ========== EXERCISES/02_FUNCTIONS-AND-POINTERS ==========
add_executable(exercise_functions_01_factorial Exercises/02_Functions-And-Pointers/01_functions_fundamentals_factorial.c)
add_executable(exercise_functions_02_primes Exercises/02_Functions-And-Pointers/02_functions_fundamentals_prime_numbers.c)
add_executable(exercise_functions_03_swap Exercises/02_Functions-And-Pointers/03_swap_for_pointers.c)

# ========== EXERCISES/03_ITERATIVE-STRUCTURES ==========
add_executable(exercise_iterative_01_for Exercises/03_Iterative-Structures/01_for_loop.c)
add_executable(exercise_iterative_02_do_while Exercises/03_Iterative-Structures/02_do_while_loop_and_char_manipulation.c)
add_executable(exercise_iterative_03_nested Exercises/03_Iterative-Structures/03_nested_loops.c)
add_executable(exercise_iterative_04_factorial Exercises/03_Iterative-Structures/04_factorial_exercise.c)
add_executable(exercise_iterative_05_fibonacci Exercises/03_Iterative-Structures/05_fibonacci_exercise.c)
add_executable(exercise_iterative_06_primes Exercises/03_Iterative-Structures/06_prime_number.c)
add_executable(exercise_iterative_07_range_primes Exercises/03_Iterative-Structures/07_range_of_prime_numbers.c)

# ========== EXERCISES/04_ONE-DIMENSIONAL-ARRAYS ==========
add_executable(exercise_arrays_01_vector Exercises/04_One-Dimensional-Arrays/01_one_dimensional_array_or_vector.c)
add_executable(exercise_arrays_02_with_functions Exercises/04_One-Dimensional-Arrays/02_arrays_with_functions.c)
add_executable(exercise_arrays_03 Exercises/04_One-Dimensional-Arrays/03_arrays_with_functions_exercise.c)
