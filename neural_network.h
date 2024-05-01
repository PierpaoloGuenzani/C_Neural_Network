#include "layer.h"

struct neural_network_s
{
    layer* array_layers;
    int number_of_layer;
    int number_of_neuron_input;
    int number_of_neuron_output;
};

typedef neural_network_s neural_network;

neural_network* createNeuronalNetwork(int number_of_layer, int number_of_neuron, int number_of_neuron_input, int number_of_neuron_output);

neural_network* addHiddenLayer(neural_network* pointer);