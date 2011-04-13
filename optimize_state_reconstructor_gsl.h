
#ifndef OPTIMIZESTATERECONSTRUCTOR_H_
#define OPTIMIZESTATERECONSTRUCTOR_H_

#include <vector>
using namespace std;

#include <armadillo>
using namespace arma;

#include "rate_model.h"
#include "state_reconstructor.h"

#include <gsl/gsl_vector.h>

class OptimizeStateReconstructor{
private:
	RateModel * rm;
	StateReconstructor * sr;
	mat * free_variables;
	int nfree_variables;
	int maxiterations;
	double stoppingprecision;

	double GetLikelihoodWithOptimized(const gsl_vector * variables);
	static double GetLikelihoodWithOptimized_gsl(const gsl_vector * variables, void *obj);

public:
	OptimizeStateReconstructor(RateModel *,StateReconstructor *, mat *, int);
	mat optimize();
};

#endif