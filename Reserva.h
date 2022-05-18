#include <string>


class Reserva{

    public:
        Reserva(){paquete=' ';costo=0;name="N/A";};
        Reserva(std::string a, double b , char c){paquete= c;costo=b;name=a;};
        void set_paquete(char n_paquete){paquete=n_paquete;};
        void set_costo();
        void set_cantPer(int n_personas){personas=n_personas;};
        void set_dia(int n_dia){dia=n_dia;};
        void set_nombre(std::string n_name){name=n_name;};
        char get_paquete(){return paquete;};
        int get_cantPer(){;return personas;};
        int get_dia(){;return dia;};
        double get_costo(){return (costo);};
        std::string get_nombre(){return name;};
        void precio();



    private:
        char paquete;
        double costo;
        std::string name;
        const double iprecio=100;
        int personas,dia;



};


void Reserva::set_costo(){

    if (paquete=='A'||paquete=='a'){
        costo=iprecio*2;
    }else if (paquete=='B'||paquete=='b'){
            costo=iprecio+iprecio*1.5;
        }else if (paquete=='C'||paquete=='c'){
                costo=iprecio*5;
            }

}