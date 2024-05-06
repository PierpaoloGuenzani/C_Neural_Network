struct neuron_s
{
    float bias;
    float dbias;
    float sum;
    float dsum;
    float out; //true 1, false 0
    float dout;
};

typedef struct neuron_s neuron;

void print_neuron(neuron* neuron);