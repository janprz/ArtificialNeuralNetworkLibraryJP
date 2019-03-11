// NoBsNN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NeuralNet.h"
#include "ReLu.h"
#include "Sigmoid.h"
#include "Coach.h"
#include "HIVDataSet.h"
#include "TanH.h"
#include <vector>

int main() {
	NeuralNet *Net = new NeuralNet;
	ReLu *reLu = new ReLu;
	Sigmoid *sigmoid = new Sigmoid;
	Layer *InputLayer = new Layer(8,reLu);
	Layer *HiddenLayer = new Layer(6, sigmoid);
	Layer *OutputLayer = new Layer(1, sigmoid);
	Net->AddLayer(InputLayer);
	Net->AddLayer(HiddenLayer);
	Net->AddLayer(OutputLayer);
	Net->ConnectLayers();
	HIVDataSet *dataSet = new HIVDataSet(0.8);
	dataSet->LoadData();
	Coach coach;
	std::vector<std::vector<float>> inputs = dataSet->GetTrainInputs();
	std::vector<std::vector<float>> outputs = dataSet->GetTrainOutputs();
	coach.Train(Net, inputs, outputs, 1000, 0.06, 0.4);
	delete Net;
	delete reLu;
	delete sigmoid;
	delete InputLayer;
	delete HiddenLayer;
	delete OutputLayer;
	delete dataSet;
	char a;
	std::cin >> a;
    return 0;
}

