# CPP00_04

> Modules 0–4 of 42's C++ curriculum: the transition from C-style code to real object-oriented design — classes, memory ownership, Orthodox Canonical Form, inheritance, and polymorphism.

![language](https://img.shields.io/badge/language-C%2B%2B98-blue)

---

## Table of Contents

- [Overview](#overview)
- [Module Breakdown](#module-breakdown)
- [Notable Implementations](#notable-implementations)
- [Getting Started](#getting-started)
- [Scale](#scale)
- [Related](#related)

---

## Overview

Each module builds directly on the last: cpp00 is barely more than C with classes, and by cpp04 there's a full abstract-class hierarchy with interfaces. Every class follows the Orthodox Canonical Form (default constructor, copy constructor, copy assignment, destructor), even where the exercise wouldn't strictly require it.

---

## Module Breakdown

| Module | Core topic | Key exercise |
|---|---|---|
| **cpp00** | Namespaces, classes, `static` members, streams | `PhoneBook` (contact store with I/O); `Account` (static-only bank ledger tracking every instance) |
| **cpp01** | Memory allocation, references vs. pointers, pointer-to-member-function | `Zombie` (heap vs. stack allocation); `HumanA`/`HumanB`/`Weapon` (reference vs. pointer aggregation); `Harl` (function-pointer table dispatch) |
| **cpp02** | Operator overloading, Orthodox Canonical Form | `Fixed` — Q8 fixed-point number with a full arithmetic/comparison operator set; point-in-triangle test built entirely on `Fixed` arithmetic |
| **cpp03** | Inheritance, constructor/destructor chaining, virtual inheritance | `ClapTrap → ScavTrap → FragTrap`, then `DiamondTrap` — diamond inheritance from both, resolved with `virtual public` bases |
| **cpp04** | Abstract classes, interfaces, deep vs. shallow copy | `Animal` hierarchy with a pure virtual `makeSound`; `ICharacter`/`AMateria` interface-based inventory system |

---

## Notable Implementations

### Fixed-Point Arithmetic — cpp02

`Fixed` stores a Q8 fixed-point number in a raw `int`, with conversions to/from `int` and `float` done via bitshifts (`num >> fractional_bits` / `num * (1 << fractional_bits)`). It implements the complete Orthodox Canonical Form plus the full operator set — `+ - * /`, all six comparisons, pre/post `++`/`--` — so it behaves like a built-in numeric type in expressions.

### Point-in-Triangle via `Fixed` — cpp02/ex03

`bsp()` decides whether a point lies inside a triangle by comparing the triangle's signed area to the sum of the areas formed with each edge and the point — all computed using `Fixed` arithmetic rather than raw floats. A point exactly on an edge (any sub-area equal to zero) is deliberately excluded, so "inside" means strictly inside.

### `DiamondTrap` — cpp03/ex03

`ScavTrap` and `FragTrap` both inherit from `ClapTrap`, and `DiamondTrap` inherits from both — the textbook diamond-inheritance problem. Both parents declare `virtual public ClapTrap`, so `DiamondTrap` ends up with exactly one `ClapTrap` subobject instead of two ambiguous copies. `whoAmI()` explicitly disambiguates which `_name` it means with `ClapTrap::_name`, and `energy` is deliberately taken from a temporary `ScavTrap` rather than either parent's default.

### Function-Pointer Dispatch — cpp01/ex06

`Harl::complain()` builds an array of pointers-to-member-functions (`void (Harl::*ptr[4])(void)`) and dispatches through it based on the requested log level, using a deliberately-falling-through `switch` so that requesting `"WARNING"` also prints `INFO` and `DEBUG` below it — mirroring how log-level filtering actually works.

### Interface-Based Inventory — cpp04/ex03

`ICharacter` is a pure-abstract interface (`equip`, `unequip`, `use`, all pure virtual); `AMateria` is a separate abstract base for anything a character can hold. `Character` implements `ICharacter` and owns up to four `AMateria*` slots, so equip/unequip/use logic never has to know whether it's holding an `Ice` or a `Cure`.

---

## Getting Started

### Requirements

- `g++` with `-std=c++98` support
- GNU Make

### Build & Run

Each exercise has its own `Makefile`:

```sh
cd CPP_03/ex03
make
./DiamondTrap
```

```sh
cd CPP_02/ex03
make
./bsp
```

Standard targets across every exercise:

```sh
make        # build
make clean  # remove object files
make fclean # remove object files and binary
make re     # fclean + rebuild
```

---

## Scale

- **5 modules** (cpp00–cpp04), **~20 exercises**
- **118 source files** (`.cpp` + `.hpp`)
- **~5,200 lines of C++**

---

## Related

- [CPP05_09](https://github.com/NikitaKuydin08/CPP05_09/) — modules 5 through 8 continue this progression: exceptions, casts, templates, and template-based containers. *(link to add)*

---

[↑ Back to top](#cpp00_04)
