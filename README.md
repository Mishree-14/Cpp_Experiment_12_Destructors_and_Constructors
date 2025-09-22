# Experiment - 12: Constructors And Destructors

## Aim

To study and understand the working of different types of constructors and destructors.

## Objectives

To learn how objects are automatically initialized using constructors.

To identify different types of constructors such as default, parameterized, and copy constructors.

To observe how destructors automatically handle cleanup when objects go out of scope.

## Theory
### Introduction to Constructors and Destructors

In Object-Oriented Programming, constructors and destructors are special member functions that manage the initialization and destruction of objects.

A constructor is responsible for setting initial values to data members.

A destructor is responsible for cleaning up resources once the object is no longer required.

### Constructor

A constructor is a special member function that shares its name with the class and has no return type.

It is automatically called whenever an object of the class is created.

Its primary job is to assign initial values to the data members.

#### Characteristics of Constructors:

They are executed automatically when objects are created.

They cannot return values.

They can be overloaded, which means multiple constructors can exist in a class with different parameter lists.

They cannot be declared as static, virtual, or abstract.

If no constructor is explicitly defined, the compiler provides a default constructor.

#### Advantages of Constructors:

Automatic initialization.

Avoids the need of calling separate functions for initialization.

Provides flexibility with constructor overloading.

Help improves readability.

#### Types of Constructors

##### Default Constructor

Takes no arguments.

Provides a standard initialization to all objects of the class.

If the programmer does not define any constructor, the compiler supplies one automatically.

##### Parameterized Constructor

Takes parameters to allow objects to be initialized with different values.

Provides flexibility for customizing object creation.

Useful in applications where different objects need different initial states.

##### Copy Constructor

Initializes one object as a copy of another object.

The new object receives the same values as the existing object.

It is called when a new object is created from an existing object.

Copy constructors can be user-defined or compiler-generated.

### Destructor

A destructor is a special member function of a class.

It has the same name as the class but is preceded with a tilde symbol (~).

It is invoked automatically when an object goes out of scope or is explicitly deleted.

It cannot accept arguments, cannot return values, and cannot be overloaded.

#### Uses of Destructors:

To free dynamically allocated memory.

To close files opened during program execution.

To release network or database connections.

To perform any cleanup activity before an object is destroyed.

#### Rules of Destructors:

Only one destructor can be defined in a class.

It is automatically invoked when the object is destroyed.

Destructors are called in the reverse order of constructors, following the rule of stack unwinding.

### Comparison Between Constructor and Destructor
| Feature             | Constructor                             | Destructor                                 |
| ------------------- | --------------------------------------- | ------------------------------------------ |
| **Purpose**         | Initializes an object                   | Cleans up or destroys an object            |
| **Invocation**      | Automatically called at object creation | Automatically called at object destruction |
| **Name**            | Same as class name                      | Same as class name with `~` prefix         |
| **Parameters**      | Can accept parameters                   | Cannot accept parameters                   |
| **Return Type**     | No return type                          | No return type                             |
| **Overloading**     | Can be overloaded                       | Cannot be overloaded                       |
| **Number Allowed**  | Multiple constructors can exist         | Only one destructor per class              |
| **Execution Order** | Called when object is created           | Called when object goes out of scope       |


### Comparison of Constructor Types
| Type of Constructor           | Description                                         | Use Case Example                                      |
| ----------------------------- | --------------------------------------------------- | ----------------------------------------------------- |
| **Default Constructor**       | Takes no arguments; assigns fixed values            | Initializing values to defaults (e.g., zero or fixed) |
| **Parameterized Constructor** | Accepts parameters for custom initialization        | Creating objects with different data values           |
| **Copy Constructor**          | Initializes new object as a copy of an existing one | Duplicating existing object data                      |

## Algorithms:
### Default Constructor Program
Start.

Define a class with data members.

Create a default constructor to assign fixed values to data members.

Define a display function to show initialized values.

Create an object of the class (constructor is called automatically).

Call the display function to print values.

Stop.

### Parameterized Constructor Program

Start.

Define a class with data members.

Create a parameterized constructor that accepts arguments and initializes data members.

Define a display function to show values.

Create objects with different values (constructor initializes them automatically).

Call display function for each object.

Stop.

### Copy Constructor Program

Start.

Define a class with data members.

Create a parameterized constructor to initialize first object.

Create a copy constructor to initialize second object using first object.

Define a display function to show object details.

Create the first object using parameterized constructor.

Create the second object using copy constructor.

Call display function for both objects.

Stop.

### Destructor Program

Start.

Define a class with data members and a static counter to track objects.

Create a constructor to increment counter whenever an object is created.

Create a destructor to decrement counter whenever an object is destroyed.

Define a display function to show counter values.

Create objects and observe constructor call.

When objects go out of scope, destructor is called automatically.

Display updated counter values.

Stop.

## Program Descriptions
### Copy Constructor Program

A student class is created with attributes such as PRN, name, and fee.

One object is created using a parameterized constructor.

Another object is created as a copy of the first object using a copy constructor.

A display function is used to show object details.

This demonstrates how objects can be copied in C++.

### Default Constructor Program

A class contains two integer variables.

A default constructor initializes them with fixed values (like 3 and 4).

A function is provided to display the initialized values.

This demonstrates how objects are initialized automatically without providing arguments.

### Destructor Program

A counter variable is maintained to track the number of objects created and destroyed.

The constructor increases the count whenever an object is created.

The destructor decreases the count whenever an object goes out of scope.

This program illustrates the role of destructors in resource cleanup and object lifecycle management.

### Parameterized Constructor Program

A class contains two integer variables.

A parameterized constructor initializes the variables using values passed during object creation.

A display function shows the initialized values.

This demonstrates the flexibility of initializing objects with different data values.

## Concepts Used

Encapsulation: Binding data and functions together inside a class.

Object Lifecycle: Creation using constructors and destruction using destructors.

Constructor Overloading: Multiple constructors with different parameters can exist in one class.

## Conclusion

Constructors provide automatic initialization and enhance code reliability.

Default constructors assign fixed values, parameterized constructors provide flexibility, and copy constructors duplicate objects.

Constructors and destructors are automatically invoked, reducing programmer effort.

Understanding them is crucial for writing efficient, robust, and maintainable object-oriented programs.
