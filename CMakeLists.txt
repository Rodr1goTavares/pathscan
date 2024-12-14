
# Versão mínima do CMake necessária
cmake_minimum_required(VERSION 3.10)

# Nome do projeto e linguagem
project(pathscan LANGUAGES C)

# Define a versão do padrão C (ajuste conforme necessário)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Adiciona o executável (substitua "main.c" pelo seu arquivo de entrada)
add_executable(${PROJECT_NAME}
    src/main.c
)

# Inclui diretórios de cabeçalhos (opcional)
include_directories(include)

# Adiciona bibliotecas externas ou internas (se necessário)
# target_link_libraries(${PROJECT_NAME} m)

# Configura opções de compilação (opcional)
# target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
