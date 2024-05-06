#include "layer.h"
#include <stdlib.h>
#include <stdio.h>

layer* create_input_layer(int number_of_neuron)
{
    layer* pointer;
    pointer = (layer*) malloc(sizeof(neuron));
    pointer->previus_layer = NULL;
    pointer->weight_previus_neurons = NULL;
    pointer->number_of_neurons = number_of_neuron;
    pointer->array_neunons = (neuron*) malloc(number_of_neuron*sizeof(neuron));
    return pointer;
}

layer* create_hidden_layer(layer* prev_layer, int number_of_neuron)
{
    layer* new = (layer*) malloc(sizeof(layer));
    prev_layer->next_layer = new;
    new->previus_layer = prev_layer;
    new->array_neunons = (neuron*) malloc(number_of_neuron*sizeof(neuron));
    int n = prev_layer->number_of_neurons;
    prev_layer->weight_next_neurons = (float*) malloc(n * number_of_neuron * sizeof(float));
    new->weight_previus_neurons = prev_layer->weight_next_neurons;
    for(int i = 0; i < (n * number_of_neuron); i++)
    {
        float r = my_random_between_0_1();
        prev_layer->weight_next_neurons[i] = r;
    }
}

layer* create_output_layer(layer* prev_layer, int number_of_neuron)
{
    layer* l = create_hidden_layer(prev_layer, number_of_neuron);
    l->next_layer = NULL;
    l->weight_next_neurons = NULL;
}

float my_random_between_0_1()
{
    return (float) rand()/RAND_MAX;
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%f\n", my_random_between_0_1());
    }
    return 0;
}