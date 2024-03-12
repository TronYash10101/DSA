#include <iostream>
#include <string>
using namespace std;

class adt_array{
    public:
    int total_size_arr;
    int used_size_arr;
    int *p;

    adt_array(int total_size, int used_size){
    total_size_arr = total_size;
    used_size_arr = used_size;
    p = (int *)malloc(total_size * sizeof(int));

    }
};

void show(adt_array*obj){
    for (int i = 0; i < obj->used_size_arr; i++)
    {
        printf("%d\n", obj->p[i]);
    }
    
}
void setVal(adt_array*obj){
    int value;
    for (int i = 0; i < obj->used_size_arr; i++)
    {
        cout << "Enter element no.:- ", i;
        cin >> value;
        obj->p[i] = value;
    }
}

int main(){
    adt_array obj(10 ,2);
    setVal(&obj);
    show(&obj);

    return 0 ;
}

