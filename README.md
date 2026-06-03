# CPP03 - Inheritance

## 📌 Descripción

Este módulo introduce el concepto de **herencia en C++**, una de las bases de la programación orientada a objetos.

El objetivo es aprender a reutilizar código, extender funcionalidades y entender cómo funcionan las jerarquías de clases.

El proyecto está dividido en varios ejercicios centrados en la creación y uso de clases derivadas.

---

## 🧠 Conceptos aprendidos

- Herencia en C++
- Constructores y destructores en jerarquías
- Encapsulación
- Redefinición de métodos
- Acceso a miembros `protected`
- Canonical Orthodox Form
- Delegación entre clases base y derivadas

---

## 📁 Estructura del proyecto

```text
CPP03/
├── ex00/
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── ClapTrap.hpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── main.cpp
│   └── Makefile
│
├── ex02/
│   ├── ClapTrap.hpp
│   ├── ScavTrap.hpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   ├── main.cpp
│   └── Makefile
│
└── ex03/
    ├── ClapTrap.hpp
    ├── ScavTrap.hpp
    ├── FragTrap.hpp
    ├── DiamondTrap.hpp
    ├── DiamondTrap.cpp
    ├── main.cpp
    └── Makefile
```

---

# 🤖 ex00 - ClapTrap

## 🎯 Objetivo

Crear la clase base `ClapTrap` que simula un robot con:

- Hit points (vida)
- Energy points (energía)
- Attack damage

### ⚔️ Acciones

```cpp
attack()
takeDamage()
beRepaired()
```

---

## 🧠 Conceptos clave

- Clase base
- Encapsulación
- Gestión de estado interno

---

# 🛡️ ex01 - ScavTrap

## 🎯 Objetivo

Crear una clase `ScavTrap` que **hereda de ClapTrap**.

Añade nuevas funcionalidades:

```cpp
guardGate()
```

---

## ⚔️ Diferencias

- Más vida que ClapTrap
- Comportamiento extendido
- Constructor y destructor propios

---

## 🧠 Conceptos clave

- Herencia pública
- Reutilización de código
- Extensión de comportamiento

---

# 💪 ex02 - FragTrap

## 🎯 Objetivo

Crear una nueva clase derivada `FragTrap`.

### Características

- Mayor daño
- Mayor energía
- Nueva acción especial:

```cpp
highFivesGuys()
```

---

## 🧠 Conceptos clave

- Jerarquía de clases
- Sobreescritura de métodos
- Constructores encadenados

---

# 💎 ex03 - DiamondTrap

## 🎯 Objetivo

Implementar una clase `DiamondTrap` que hereda de:

- `ScavTrap`
- `FragTrap`

---

## ⚠️ Problema principal

Resolver el **diamond problem** de herencia múltiple.

---

## ⚙️ Características

```cpp
void whoAmI();
```

- Combina atributos de ambas clases base
- Gestiona correctamente ambigüedades

---

## 🧠 Conceptos clave

- Herencia múltiple
- Ambigüedad de clases base
- Scope resolution operator `::`
- Arquitectura compleja de clases

---

## ⚙️ Compilación

```bash
cd ex00 && make
cd ex01 && make
cd ex02 && make
cd ex03 && make
```

---

## 🚀 Ejecución

### ex00
```bash
./claptrap
```
### ex01
```bash
./scavtrap
```
### ex02
```bash
./fragtrap
```
### ex03
```bash
./diamondtrap
```

---

## 🧪 Compilación obligatoria

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## 📚 Lecciones importantes

- La herencia permite reutilizar código eficientemente
- El orden de constructores y destructores es clave
- La herencia múltiple puede causar ambigüedades
- C++ requiere control explícito del diseño de clases

---

## 🧾 Autor
Carlos Raveglia Cuesta
Proyecto realizado como parte del currículo de la escuela.
