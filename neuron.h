
struct neuron_s
{
    neuron_s* array_previous_neuron;
    float* array_previous_weight;
    neuron_s* array_next_neuron;
    float* array_next_weight;

    float bias;
    float sum;
    int out; //true 1, false 0 
};

typedef struct neuron_s neuron;