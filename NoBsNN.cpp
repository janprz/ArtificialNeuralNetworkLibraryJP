// NoBsNN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NeuralNet.h"
#include "ReLu.h"
#include "Sigmoid.h"
#include <vector>
#include "Coach.h"
#include "HIVDataSet.h"

int main() {
	/*NeuralNet *Net = new NeuralNet;
	ReLu *reLu = new ReLu;
	Sigmoid *sigmoid = new Sigmoid;
	Layer *InputLayer = new Layer(8,reLu);
	Layer *HiddenLayer = new Layer(6, reLu);
	Layer *OutputLayer = new Layer(1, sigmoid);
	Coach coach;
	Net->AddLayer(InputLayer);
	Net->AddLayer(HiddenLayer);
	Net->AddLayer(OutputLayer);
	Net->connectLayers();
	std::vector<std::vector<float>> inputs;
	std::vector<std::vector<float>> outputs;
	std::vector<float> input1{0.1f,0.2f,0.4f,0.4f,0.5f,0.3f,0.6f,0.7f};
	std::vector<float> input2{0.21f,0.122f,0.44f,0.54f,0.75f,0.3f,0.6f,0.7f};
	inputs.push_back(input1);
	inputs.push_back(input2);
	std::vector<float> output1{1};
	std::vector<float> output2{-1};
	outputs.push_back(output1);
	outputs.push_back(output2);
	coach.Train(Net, inputs, outputs, 100, 0.1f, 0.2f);*/

	HIVDataSet * dataSet = new HIVDataSet(0.9);
	dataSet->LoadData();
	dataSet->Print();
	char a;
	std::cin >> a;
    return 0;
}

