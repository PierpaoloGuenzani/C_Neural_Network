#include<neuron.h>

struct layer_s
{
    neuron* array_neunons;
};

typedef struct layer_s layer;

layer* create_input_layer(int number_of_neuron);

layer* create_hidden_layer(int number_of_neuron);

layer* create_output_layer(int number_of_neuron);
