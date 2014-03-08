#pragma once

namespace CppLVQ
{
	/**
	 * Status of a training process.
	 * The structure is used by the training process to provide
	 * useful information to a callback function.
	 * @see train()
	 */
	struct TrainingStatus
	{
		double percent;
		double meanSquareError;
	};

	/**
	 * Abstract LVQ class.
	 * It's simply an abstract class with basic methods declared.
	 * @tparam T type of input vectors
	 * @tparam neurons number of hidden neurons (subclasses)
	 */
	template <typename T, int neurons>
	class LVQ
	{
	public:
		LVQ(void);
		virtual ~LVQ(void);

		/**
		 * Train the LVQ network.
		 * This method performs a training of neural network.
		 * @param inputs a 2-dimensional array of input vectors (row is a vector, column is an input)
		 * @param outputs an array containing outputs (classes) of neural network, for training purposes
		 * @param numberOfVectors is a number of rows in a data
		 * @param numberOfInputs is a number of columns in a data
		 * @param numberOfClasses is a number of outputs (classes)
		 * @param callback a pointer to a callback function that will be provided with a pointer to a 
		 *			TrainingStatus structure, might be null if not used. The callback function will be called each epoch with the
					structure filled with a current training status
		 * @param trainingStatus a pointer to a structre that will be filled with a useful information after a training process
		 * @return 0 if success, error code otherwise.
		 */
		virtual int train(T* inputs, 
							int* outputs, 
							int numberOfVectors, 
							int numberOfInputs, 
							int numberOfClasses, 
							void (*callback)(TrainingStatus* trainingStatus),
							TrainingStatus* trainingStatus) = 0;

		/**
		 * Classify inputs.
		 * Performs a classification of inputs over a trained neural network.
		 * @param inputs an array of inputs
		 * @param outputs an array of outputs (classes)
		 * @return Computed class
		 */
		virtual int classify(T* inputs, int* outputs) = 0;

		/**
		 * Save a neural network.
		 * This method allows you to export your trained (or not) neural network to a file.
		 * The exported neural network can be used in a future without a need of repeating
		 * a learning process.
		 * @param path a disk path where the neural network should be stored. When null, the file will be saved in a current directory.
		 * @see load()
		 */
		virtual void save(char* path);

		/**
		 * Load a neural network.
		 * Import the exported neural network.
		 * @param path a path where the neural network was stored
		 * @see save()
		 */
		virtual void load(char* path);

	private:
	protected:
		T* weightVectors;
	};
}

#include "../src/LVQ.hpp"