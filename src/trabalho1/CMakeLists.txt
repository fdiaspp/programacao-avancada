cmake_minimum_required(VERSION 3.7)
project(trabalho1)

set(CMAKE_CXX_STANDARD 11)

add_executable(trabalho1 main.cpp model/Veiculo.h model/Carro.h control/Controlador.h control/Controlador.cpp model/Caminhao.h view/VeiculoView.h)