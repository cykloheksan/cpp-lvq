#pragma once

#include "LVQ.h"

namespace CppLVQ
{
	template <typename T, int neurons>
	class LVQ3 : public LVQ<T, neurons>
	{
	public:
		LVQ3(void);
		~LVQ3(void);

		virtual int train(T* inputs, 
							int* outputs, 
							int numberOfVectors, 
							int numberOfInputs, 
							int numberOfClasses, 
							void (*callback)(TrainingStatus* trainingStatus),
							TrainingStatus* trainingStatus);
		int classify(T* inputs, int* outputs);
	};
}

#include "../src/LVQ3.hpp"