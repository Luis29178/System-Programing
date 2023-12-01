#include <iostream>
#include <vector>
#include "Triangle.h"



int AddNumberReturnInt(int* a, int* b);
void AddNumberReturnVoid(int a, int b, int* sum);
void SwapValus(int* c, int* d);

int main()
{

    /*_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    * _CrtSetBreakAlloc(8983);
    * _CrtDumpMemoryLeaks();
    */
    std::vector<Triangle> asTriangle;//everything on stack
    std::vector<Triangle*> *ahTriangle = new std::vector<Triangle*>;//everything on the heap
    std::vector<Triangle*> sTriangles;//sTriangle on stack Triangle on heap
    std::vector<Triangle> *hTriangle= new std::vector<Triangle>;//hTriangle on heap Triangles on the stack

    delete ahTriangle;
    delete hTriangle;
   
    


    system("pause");
}

int AddNumberReturnInt(int* c, int* d)
{
    int x = *c;
    int y = *d;
    int z;
    z = x + y;
    return z;
    
}
void AddNumberReturnVoid(int a, int b, int* sum)
{
    int x = a + b;
    *sum = x;
}
void SwapValus(int* c, int* d)
{

    int *temp = c;
    c = d;
    d = temp;

}