#include "neuron.h"

struct layer_s
{
    struct layer_s* previus_layer;
    float* weight_previus_neurons; //bidirectional
    neuron* array_neunons;
    struct layer_s* next_layer;
    float* weight_next_neurons;
    int number_of_neurons;
};

typedef struct layer_s layer;

layer* create_input_layer(int number_of_neuron);

layer* create_hidden_layer(layer* prev_layer, int number_of_neuron);

layer* create_output_layer(layer* prev_layer, int number_of_neuron);
