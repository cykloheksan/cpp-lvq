template <typename T, int neurons>
CppLVQ::LVQ3<T, neurons>::LVQ3(void)
{
}

template <typename T, int neurons>
CppLVQ::LVQ3<T, neurons>::~LVQ3(void)
{
}

template <typename T, int neurons>
int CppLVQ::LVQ3<T, neurons>::classify(T* inputs, int* outputs)
{
	return 0;
}

template <typename T, int neurons>
int CppLVQ::LVQ3<T, neurons>::train(T* inputs, 
							int* outputs, 
							int numberOfVectors, 
							int numberOfInputs, 
							int numberOfClasses, 
							void (*callback)(TrainingStatus* trainingStatus),
							TrainingStatus* trainingStatus)
{
	return 0;
}