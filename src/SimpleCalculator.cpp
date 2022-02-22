#include "SimpleCalculator.hpp"
#include <cmath>

using std::pow;
using std::sin;
using std::abs;

namespace calculator {
	SimpleCalculator::SimpleCalculator(const double& a_, const double& b_)
		: a(a_)
		, b(b_)
	{}

	double SimpleCalculator::compute(const double& x) const
	{
		return fabs(cos((x - a) / (x + b))) * sin(2) * (pow(x, 1.6) - 1);
	}

}