#include "layer.h"

struct neural_network_s
{
    layer** array_layers;
    int number_of_layer;
    int number_of_neuron_input;
    int number_of_neuron_output;
};

typedef struct neural_network_s neural_network;

//number_of_layer = #hidden layer + 2;
neural_network* create_neuronal_network(int number_of_layer, int number_of_neuron, int number_of_neuron_input, int number_of_neuron_output);