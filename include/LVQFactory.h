#pragma once

#define LVQ_TYPE_1		0
#define LVQ_TYPE_2		1
#define LVQ_TYPE_2_1	2
#define LVQ_TYPE_3		3

#include "LVQ.h"
#include "LVQ1.h"
#include "LVQ2.h"
#include "LVQ21.h"
#include "LVQ3.h"

namespace CppLVQ
{
	/**
	 * Factory for LVQ neural networks.
	 * This is the class that you should use to properly
	 * construct a LVQ network.
	 * @tparam T type of input vectors
	 * @tparam neurons number of hidden neurons (subclasses)
	 */
	template <typename T, int neurons>
	class LVQFactory
	{
	public:
		/**
		 * Construct an LVQ object.
		 * This method simply creates a new LVQ object.
		 * @param lvqType type of LVQ (LVQ_TYPE_1, LVQ_TYPE_2, LVQ_TYPE_2_1, LVQ_TYPE_3)
		 * @return New LVQ object
		 */
		static LVQ<T, neurons>* newLVQ(int lvqType)
		{
			switch(lvqType)
			{
			case LVQ_TYPE_1:
				return new LVQ1<T, neurons>;
				break;

			case LVQ_TYPE_2:
				return new LVQ2<T, neurons>;
				break;

			case LVQ_TYPE_2_1:
				return new LVQ21<T, neurons>;
				break;

			case LVQ_TYPE_3:
				return new LVQ3<T, neurons>;
				break;

			default:
				return new LVQ1<T, neurons>;
				break;
			}
		}
	};
}