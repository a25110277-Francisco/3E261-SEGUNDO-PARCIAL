#pragma once
#include <Foco.hpp>
#include <iostream>

class SerieFoco
{
private:
    Foco focos[10];
public:
    SerieFoco();
    ~SerieFoco();
    void MostrarFocos(){
        for (auto &&f : focos)
        {
            std :: cout << f.LeerEstado();
        }
        std :: cout << std::endl;
    }
    void EncenderFocos(){
        for (auto &&f : focos)
        {
            f.Encender();
        }
        
    }
    void ApagarFocos(){
        for (auto &&f : focos)
        {
            f.Apagar();
        }
        
    }
};
