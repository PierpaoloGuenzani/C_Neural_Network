#include "neural_network.h"
#include <stdlib.h>

neural_network* create_neuronal_network(int number_of_layer, int number_of_neuron, int number_of_neuron_input, int number_of_neuron_output)
{
    neural_network* n = (neural_network*) malloc(sizeof(neural_network));
    n->array_layers = malloc((number_of_layer  + 2) * sizeof(layer*));
    layer* l = create_input_layer(number_of_neuron_input);
    n->array_layers[0] = l;
    for (int i = 1; i < (number_of_layer - 1); i++)
    {
        l = create_hidden_layer(l, number_of_neuron);
        n->array_layers[i] = l;
    }
    l = create_output_layer(l, number_of_neuron_output);
    n->array_layers[number_of_layer - 1] = l;
}