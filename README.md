# CuteConsole

![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![C++98](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![Static Library](https://img.shields.io/badge/Type-Static%20Library-purple?style=flat-square)
![Cross Platform](https://img.shields.io/badge/Platform-Cross--platform-success?style=flat-square)
![Modular](https://img.shields.io/badge/Architecture-Modular-orange?style=flat-square)

> Librería estática en C++98 para formatear la salida de terminal con colores ANSI, emojis Unicode y marcos decorativos. Zero dependencies, máxima compatibilidad y API intuitiva.

## Características

- **16Colores de Texto** -8 básicos + 8 brillantes con estilos (negrita, cursiva, subrayado, parpadeo)
- **16 Colores de Fondo** -Paleta completa básica y brillante para fondos
- **50+ Emojis Predefinidos** -Categorizados: caras, gestos, símbolos, objetos, naturaleza
- **Marcos Decorativos** -Bordes simples y elegantes para destacar mensajes
- **Zero Dependencies** -SoloSTL, sin librerías externas
- **Namespace Modular** -`Color::`, `Emoji::`, `Frame::` para API limpia

## Stack Tecnológico

| Componente | Tecnología |
|------------|------------|
| Lenguaje | C++98 |
| Sistema de Build | Makefile |
| Formato | Librería estática (.a) |
| Formato de Salida | ANSI Escape Codes |

## DecisionesTécnicas

El estándar **C++98** garantiza compatibilidad con sistemas legacy y entornos 42 Network. La arquitectura basada en **namespaces** permite integración selectiva sin colisiones. Los **códigos ANSI** eliminan dependencias externas manteniendo portabilidad en terminales modernas. La **librería estática** simplifica el linking en proyectos existentes.

## Arquitectura

```mermaid
flowchart TD
    subgraph Usuario["Proyecto Host"]end
    
    subgraph Lib["libcute.a"]
        H["CuteConsole.h"]
        C["Color"]
        E["Emoji"]
        F["Frame"]
        H --> C
        H --> E
        H --> F
    end
    
    Usuario --> H
    C --> T["stdout"]
    E --> T
    F --> T
```

## Instalación

```bash
git clone https://github.com/samuelhm/cute_console.git
cd cute_console && make
```

```bash
make fclean    # Limpiar todo
make re        # Recompilar
```

## Uso

```cpp
#include "CuteConsole.h"

int main() {
    printCute("Error crítico", Color::red);
    std::cout << Color::bold << Emoji::rocket<< " Iniciando" << std::endl;
    Frame::FrameTittle("Título", Color::cyan);
    return 0;
}
```

```bash
g++ -std=c++98 main.cpp -Iinc -L. -lcute -o app
```

## Contacto

[![GitHub](https://img.shields.io/badge/GitHub-samuelhm-181717?style=flat-square&logo=github)](https://github.com/samuelhm/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-shurtado--m-0A66C2?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/shurtado-m/)