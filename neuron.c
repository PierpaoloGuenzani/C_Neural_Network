#include "neuron.h"
#include <stdio.h>

void print_neuron(neuron* neuron)
{
    printf("neuron at : %i\n", neuron);
    printf("bias : %.6f\n", neuron->bias);
    printf("dbias : %.6f\n", neuron->dbias);
    printf("sum : %.6f\n", neuron->sum);
    printf("dsum : %.6f\n", neuron->dsum);
    printf("out : %.6f\n", neuron->out);
    printf("dout : %.6f\n", neuron->dout);
}

int main()
{
    neuron n;
    n.bias = 0.5;
    n.dbias = 0.5;
    n.sum = 0.5;
    n.dsum = 0.5;
    n.out = 0.5;
    n.dout = 0.5;
    printf("neuron structure created");
    print_neuron(&n);
    return 0;
}