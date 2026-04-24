#include <iostream>
#include <SerieFoco.hpp>
#include <Foco.hpp>

int main (int argc, char const *argv[]){
    SerieFoco serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

 return 0;
}
